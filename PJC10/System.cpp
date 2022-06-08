//
// Created by szaszo on 17.05.2022.
//

#include "System.h"

void Elf::charmPerson(Character &o) {
    o.setStatus(CHARMED);
}

Elf::Elf() : Character() {
    Dex += DexMod;
}

void Dwarf::useResilience() {
    if(HP<5)
        HP+=10;
}

Dwarf::Dwarf() : Character() {
    Str+=StrMod;
}

void Mage::charmPerson(Character &o) {
    o.setStatus(UNCONCIUS);
}
