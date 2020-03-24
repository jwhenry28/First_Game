#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "Item.h"

class Inventory
{
public:
    Inventory();
    ~Inventory();
    void addItem(const Item &item);
    void removeItem(const std::string &str);
    inline void debugPrint() const
    {
        for (size_t i = 0; i < numItems; i++)
        {
            itemArr[i]->debugPrint();
        }
    }
    
private:
    size_t capacity;
    size_t numItems;
    Item **itemArr;
    void expand(size_t size);
    void initialize(const int from);
};

#endif // INVENTORY_H_
