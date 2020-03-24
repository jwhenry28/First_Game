#include "Locations.h"

Location::Location(std::string name)
{
    this->name = name;
    this->brief = "There is nothing here.";
    this->description = "There is a whole lot of nothing here.";
    this->numItems = 0;
    this->capacity = 5;
    this->itemArr = new Item*[capacity];
    this->north = nullptr;
    this->south = nullptr;
    this->east = nullptr;
    this->west = nullptr;
}

Location::~Location()
{
}


/* addItem - Adds an item to the player's inventory
 */
void Location::addItem(const Item &item)
{
    if (this->numItems >= this->capacity)
    {
        std::cout << "There is no space for that here..." << std::endl;
        return;
    }
    
    this->itemArr[this->numItems++] = new Item(item);
}


void Location::printLoc()
{
    std::cout << "==========" << this->name << "==========" << std::endl;
    
    this->printBrief();
    this->printDescr();
    
    std::cout << std::endl;
    
    /* Print other locations */
    if (this->north != nullptr)
    {
        std::cout << "North: " << this->north->getName() << std::endl;
    }
    if (this->south != nullptr)
    {
        std::cout << "South: " << this->south->getName() << std::endl;
    }
    if (this->east != nullptr)
    {
        std::cout << "East: " << this->east->getName() << std::endl;
    }
    if (this->west != nullptr)
    {
        std::cout << "West: " << this->west->getName() << std::endl;
    }
    
    std::cout << std::endl;
    
    /* Print items */
    if (this->numItems > 0)
    {
        std::cout << "Items here: ";
        for (size_t i = 0; i < this->numItems; i++)
        {
            std::cout << this->itemArr[i]->getName();
            if (i < numItems - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}

void initialize_main_graph(Game *game)
{
    Location *field = new Location("Corn Field");
    field->setBrief("A small cornfield of an abandoned farm.");
    field->setDescr("You are in a small cornfield of an abandoned farm. Although no corn is currently growing, you can see the\n"
                    "fibers of harvests long past ground into the earth. A small house lies a few hundred yards to the\n"
                    "south. A large barn lies to the east.");
                    
    Location *house = new Location("Farm House");
    house->setBrief("A modern looking farm house");
    house->setDescr("You are at the back door of a modern looking farm house. A small carport provides some shelter for bad weather\n"
                    "outdoors. There is a well-used 'Welcome' mat in front of the door. Muddy tire tracks lead off to the east");
    house->addItem(Item("Farm House Key"));
    field->setSouth(house);
    house->setNorth(field);
    
    Location *barn = new Location("Old Barn");
    barn->setBrief("A rotting old barn");
    barn->setDescr("You are at the moldering gates of a barn long past its prime. A framework of rotting pine wood stands weakly,\n"
                   "although it looks like a determined vandal could bring the whole thing down. Several rusty farm tools are piled\n"
                   "up in the back corner. The only thing that looks salvagalbe is a wood axe.");
    barn->addItem(Item("Wood Axe"));
    field->setEast(barn);
    barn->setWest(field);
    
    field->printLoc();
    house->printLoc();
    barn->printLoc();
}
