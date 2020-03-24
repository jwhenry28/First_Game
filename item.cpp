#include "Item.h"


Item::Item(std::string name)
    : name {name} {
}


Item::~Item()
{
}


void Item::initialize(std::string name)
{
    this->name = name;
}