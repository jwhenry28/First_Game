#ifndef LOCATIONS_H_
#define LOCATIONS_H_

#include "Game.h"

class Game;

class Location
{
public:
    Location(std::string name = "NONE");
    ~Location();
    
    /* Debug */
    void printLoc();
    
    /* Accessors */
    inline const std::string& getName() const { return this->name; }
    
    /* Modifiers */
    inline void setBrief(std::string newBrief) { this->brief = newBrief; }
    inline Location* getNorth() const { return this->north; }
    inline Location* getSouth() const { return this->south; }
    inline Location* getEast() const { return this->east; }
    inline Location* getWest() const { return this->west; }
    inline void setDescr(std::string newDescr) { this->description = newDescr; }
    inline void setNorth(Location *newLoc) { this->north = newLoc; }
    inline void setSouth(Location *newLoc) { this->south = newLoc; }
    inline void setEast(Location *newLoc) { this->east = newLoc; }
    inline void setWest(Location *newLoc) { this->west = newLoc; }
    void addItem(const Item &item);
    void removeItem(const std::string &str);
    
    /* Utils */
    inline bool match(std::string query) const { return query.compare(this->name) == 0; }
    inline void printBrief() const { std::cout << brief << std::endl; }
    inline void printDescr() const { std::cout << description << std::endl; }
    
private:
    std::string name;
    std::string brief;
    std::string description;
    Item **itemArr;
    size_t numItems;
    size_t capacity;
    Location *north;
    Location *south;
    Location *east;
    Location *west;
};

void initialize_main_graph(Game *game);

#endif // LOCATIONS_H_
