//
// Created by szaszo on 24.05.2022.
//

#ifndef UNTITLED1_BAG_H
#define UNTITLED1_BAG_H


#include <vector>
#include "Item.h"

class Bag {
public:
    int *w,*d;
    std::vector<Item>  items;
    Bag(int w, int d);
    ~Bag();
    void addITem(Item *i);
    Item* getItemPtr();
    Item& getItemRef();
};


#endif //UNTITLED1_BAG_H
