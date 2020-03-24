#include "Player.h"

Player::Player()
    : name {"NONE"} {
}


Player::~Player()
{
}


void Player::initialize(std::string name)
{
    this->name = name;
}


/* getName - Returns name of the player
 */
std::string Player::getName() const
{
    std::string tmp = name;
    return tmp;
}


/* getAsString - Returns all relevant stats about the player as a string to be
 *               saved.
 */
std::string Player::getAsString() const
{
    return name;
}
