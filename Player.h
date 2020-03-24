#ifndef PLAYER_H_
#define PLAYER_H_

#include "Inventory.h"

class Player
{
public:
    Player();
    ~Player();
    void initialize(std::string name);
    std::string getAsString() const;
    std::string getName() const;
    inline void setName(std::string name) { this->name = name; }

private:
    std::string name;
    Inventory inv;
};

#endif // PLAYER_H_
