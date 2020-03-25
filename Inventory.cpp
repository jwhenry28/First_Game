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


Item& Inventory::operator[](const size_t index)
{
    if (index > this->numItems)
        throw("BAD INDEX");
        
    return *this->itemArr[index];
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


/* removeItem - Removes an item from the player's inventory
 */
 void Inventory::removeItem(const std::string &str)
 {
     size_t i, j = 0, removed = 0;
     for (i = 0; i < this->numItems; i++)
     {
         /* Continue if removed item is found */
         if (this->itemArr[i]->getName().compare(str) == 0)
         {
            delete this->itemArr[i];
            removed++;
            continue;
         }
         
         /* Overwrite current item with next non-removed item */
         this->itemArr[j] = this->itemArr[i];
         j++;
     }
     
     this->numItems -= removed;
 }