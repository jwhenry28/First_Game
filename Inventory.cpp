#include "Inventory.h"


Inventory::Inventory()
    : capacity {0}, numItems{0} {
    itemArr = new Item*[capacity];
}


Inventory::~Inventory()
{
    for (size_t i = 0; i < numItems; i++)
    {
        delete this->itemArr[i];
    }
    delete[] itemArr;
}


/* expand - Expands player's inventory by size items
 */
void Inventory::expand(size_t size)
{
    capacity += size;
    
    Item **tmpArr = new Item*[capacity];
    
    /* Copy in old inventory */
    for (size_t i = 0; i < numItems; i++)
    {
        tmpArr[i] = new Item(*itemArr[i]);
    }
    
    /* Delete old inventory from old array */
    for (size_t i = 0; i < numItems; i++)
    {
        delete itemArr[i];
    }
    delete[] itemArr;
    
    /* Reset itemArr */
    itemArr = tmpArr;
    initialize(numItems);
}


/* initialize - Sets all items in a player's inventory to nullptr starting from
 *              a certain index.
 */
void Inventory::initialize(const int from)
{
    for (size_t i = from; i < capacity; i++)
    {
        itemArr[i] = nullptr;
    }
}


/* addItem - Adds an item to the player's inventory
 */
void Inventory::addItem(const Item &item)
{
    if (numItems >= capacity)
    {
        std::cout << "Your inventory is full..." << std::endl;
        return;
    }
    
    itemArr[numItems++] = new Item(item);
}