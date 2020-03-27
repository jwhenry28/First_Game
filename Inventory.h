#ifndef INVENTORY_H_
#define INVENTORY_H_

#include "Item.h"

class Inventory
{
public:
    Inventory();
    ~Inventory();
    void expand(size_t size);
    void addItem(const Item &item);
    void removeItem(const std::string &str);
    inline void debugPrint() const
    {
        for (size_t i = 0; i < numItems; i++)
        {
            itemArr[i]->debugPrint();
        }
    }
    inline void printInv() const
    {
        for (size_t i = 0; i < numItems; i++)
        {
            std::cout << itemArr[i]->getName();
            if (i != numItems - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
    Item& operator[](const size_t index);
    
private:
    size_t capacity;
    size_t numItems;
    Item **itemArr;
    void initialize(const int from);
};

#endif // INVENTORY_H_
