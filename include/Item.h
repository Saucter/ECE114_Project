#ifndef ITEM_H
#define ITEM_H

#include <string>

struct Item {
    std::string name;
    std::string type;
    int quantity = 0; // Default value
    int value;
    int tier;

    // Constructor with logic for value
    Item(const std::string &name, const std::string &type, int tier) : name(name), type(type), tier(tier) 
    {
        if (type == "heal")
            value = 10 * tier;
        else if (type == "block")
            value = 5 * tier;
        else if (type == "damage")
            value = 15 * tier;
        else
            value = 0;
    }
};


#endif