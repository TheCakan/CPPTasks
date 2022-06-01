//
// Created by szaszo on 24.05.2022.
//

#include <iostream>
#include "Bag.h"

Bag::Bag(int w, int d) {
    this->w = new int(w);
    this->d = new int(d);
}

Bag::~Bag() {
    std::cout << "Removing object: " << *w << " " <<
               *d << "\n";
    delete w;
    delete d;
}

void Bag::addITem(Item *i) {
    if(*w<*i->w || *d<*i->d)
        throw "Item is too big\n";
    items.push_back(*i);
}

Item *Bag::getItemPtr() {
    if(items.size()<1) throw "No items in bag";
    return &items[0];
}

Item &Bag::getItemRef() {
    if(items.size()<1) throw "No items in bag";
    return items[0];
}
