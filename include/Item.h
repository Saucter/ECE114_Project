#ifndef ITEM_H
#define ITEM_H

#include <string>

struct Item {
    std::string name;
    std::string type;  
    int value;
    int quantity;
    int tier;
};

#endif