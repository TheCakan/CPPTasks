//
// Created by szaszo on 24.05.2022.
//

#include <iostream>
#include "Item.h"

Item::Item(int w, int h, int d) {
    this->h = new int(h);
    this->w = new int(w);
    this->d = new int(d);
}

Item::~Item() {
    std::cout << "Removing object: " << *w << " " <<
              *h << " " << *d << "\n";
    delete h;
    delete w;
    delete d;
}

Item::Item(const Item& i) {
    this->h = new int(*i.h);
    this->w = new int(*i.w);
    this->d = new int(*i.d);
}
