#include <iostream>
#include "Item.h"
#include "Bag.h"

void f(int a) {
    if (a > 10)
        throw std::exception();
    throw 12;
}

class A {
public:
    int *a, *b;

    A() {
        a = new int(10);
        b = new int(9);
    }

    ~A() {
        delete a;
        delete b;
    }
};

int main() {
    Item *i=new Item(1,2,3);
    Item *j=new Item(4,5,6);

    Bag *b=new Bag(2,3);

    try{
        b->addITem(i);

        Item *k=b->getItemPtr();
        Item l=b->getItemRef();
        b->addITem(j);
    }catch (const char* a){
        std::cout<<a;
    }

    delete i;
    delete j;
    delete b;
//    try {
//        f(8);
//    }catch (std::exception &e){
//        std::cout<<e.what();
//    }catch(const char * a){
//        std::cout<<a<<"\n";
//    }catch (...){
//        std::cout<<"Different exception\n";
//    }
//
//    int a = 4;
//    int *b = new int(10);
//    std::cout << *b << std::endl;
//    std::cout << b << std::endl;
//    delete b;
//    std::cout << *b << std::endl;
//    std::cout << b << std::endl;
    return 0;
}
