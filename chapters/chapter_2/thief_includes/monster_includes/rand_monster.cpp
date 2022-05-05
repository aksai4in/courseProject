#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "monster_struct.cpp"
using namespace std;
void rand_monster(monster *monster){
    srand(time(0));
    int type = rand() % 2;
    if(type == 0){
        monster->name = "Monster wolf";
        monster->level = 5;
        monster->luck = 3;
        monster->HP = 100;
    }
    else if(type == 1){
        monster->name = "Giant Ant";
        monster->level = 7;
        monster->luck = 4;
        monster->HP = 100;
    }
}
