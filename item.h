#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream> 
#include <iterator>

class Item
{
public:
    Item(std::string name = "NONE");
    ~Item();
    void initialize(std::string name);
    
    /* Debug */
    inline void debugPrint() const { std::cout << name << std::endl; }
    
    /* Accessors */
    inline const std::string& getName() const { return this->name; }

    /* Modifiers */
private:
    std::string name;
};

#endif // ITEM_H_
