//
// Created by szaszo on 24.05.2022.
//

#ifndef UNTITLED1_ITEM_H
#define UNTITLED1_ITEM_H




class Item {
public:
    int *h,*w,*d;
    Item(int w, int h, int d);
    Item(const Item& i);
    ~Item();
};


#endif //UNTITLED1_ITEM_H
