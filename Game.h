#ifndef GAME_H_
#define GAME_H_

#include <fstream>
#include "Player.h"
#include "Locations.h"
#include "Utils.h"

#define GRAPH_SIZE 3

class Location;


class Game
{
public:
    Game();
    virtual ~Game();
    
    /* Player info */
    Player player;
    Location *currLoc;

    /* Debug */
    void printGraph();
    
    /* Functions */
    void createNewCharacter();
    void save();
    void load();
    std::vector<std::string> parseChoice();
    
    /* Accessors */
    inline bool getPlaying() const { return this->playing; }
    inline std::string getPlayerName() const { return player.getName(); }
    inline Location* graphAt(size_t i) { return this->graph[i]; }
    inline const Location& getLoc() const { return *this->currLoc; }
    
    /* Modifiers */
    inline void setGraph(Location **newGraph) { this->graph = newGraph; }
    void movePlayer(std::string direction);
    
private:
    Location **graph;
    int choice;
    bool playing;
    std::string fileName;
};

#endif // GAME_H_
