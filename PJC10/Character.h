//
// Created by szaszo on 17.05.2022.
//

#ifndef UNTITLED2_CHARACTER_H
#define UNTITLED2_CHARACTER_H

enum Status{
    NORMAL, CHARMED, UNCONCIUS, DEAD
};

class Character {
protected:
    int Str, Dex, level, HP;
    Status status;
public:
    Character();
    Character(int Str, int Dex, int level, int HP, Status status);
    Character(const Character &c);
    ~Character();
    void setStatus(Status s){ status=s;}
    void setHP(int i){HP=i;}
    int getHP(){return HP;}
};


#endif //UNTITLED2_CHARACTER_H
