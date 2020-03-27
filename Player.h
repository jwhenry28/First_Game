#ifndef PLAYER_H_
#define PLAYER_H_

#include "Inventory.h"

class Player
{
public:
    /* Maintainence */
    Player();
    ~Player();
    void initialize(std::string name);
    
    /* Accessors */
    std::string getAsString() const;
    std::string getName() const;
    void printInv();
    
    /* Modifiers */
    inline void setName(std::string name) { this->name = name; }
    inline void addItem(const Item &item) { inv.addItem(item); }
    inline void removeItem(std::string &str) { inv.removeItem(str); }
    
private:
    std::string name;
    Inventory inv;
};

#endif // PLAYER_H_
