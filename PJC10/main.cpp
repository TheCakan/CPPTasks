
#include <iostream>
#include "System.h"
class C{
protected:
    int b;
};

class A{
private:
    C *d=new C();
    int a;
protected:
    int b;
public:
    int c;
    A(A &o){
        this->a=o.a;
        this->b=o.b;
        this->c=o.c;
    }
    A(int a, int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    ~A(){ delete d;}
    virtual void f()=0;
};


class B : public A,protected C{
public:
    int c;
    B(int c) : A(0,0,0),C()
    {
        this->c=c;
    }
    void f() override{ std::cout<<"B";}
};


int main() {
    ElfMage em=ElfMage();
    DwarfWarrior dw=DwarfWarrior();
    em.Elf::charmPerson(dw);
    em.Mage::charmPerson(dw);

    dw.useResilience();
    dw.attack(em);
    //A a=A(0,0,0);
    B b=B(10);
    std::cout << b.A::c << std::endl;
    return 0;
}
