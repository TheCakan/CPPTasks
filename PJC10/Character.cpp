//
// Created by szaszo on 17.05.2022.
//

#include "Character.h"

Character::Character() :
        Str(1), Dex(1), level(1), HP(1) {
    status = NORMAL;
}

Character::Character(int Str, int Dex, int level, int HP, Status status)
: Str(Str), Dex(Dex), level(level), HP(HP),
                                                                          status(c.status){
}


Character::Character(const Character &c)
        : Str(c.Str), Dex(c.Dex), level(c.level), HP(c.HP),
          status(c.status){
}

Character::~Character() {

}
