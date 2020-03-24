#ifndef GAME_H_
#define GAME_H_

#include <fstream>
#include "Player.h"
#include "Locations.h"
#include "Utils.h"

class Location;

class Game
{
public:
    Game();
    virtual ~Game();

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
    
    /* Modifiers */
    
private:
    Player player;
    Location *graph;
    int choice;
    bool playing;
    std::string fileName;
};

#endif // GAME_H_
