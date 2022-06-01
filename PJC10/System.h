//
// Created by szaszo on 17.05.2022.
//

#ifndef UNTITLED2_SYSTEM_H
#define UNTITLED2_SYSTEM_H

#include "Character.h"

class Elf : public Character{
protected:
    int DexMod=2;
public:
    Elf();
    void charmPerson(Character &o);
};
class Dwarf : public Character{
protected:
    int StrMod=2;
public:
    Dwarf();
    void useResilience();
};

class Mage{
public:
    void charmPerson(Character &o);
};

class Warrior{
public:
    virtual void attack(Character&c)=0;
};

class ElfMage : public Elf, public Mage{};
class DwarfWarrior : public Dwarf, public Warrior{
public:
    void attack(Character &c) override{
        c.setHP(c.getHP()-Str*level);
    }
};
#endif //UNTITLED2_SYSTEM_H
