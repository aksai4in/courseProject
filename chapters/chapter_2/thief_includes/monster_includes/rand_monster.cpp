#include <iostream>
#include <time.h>
#include <stdlib.h>
//#include "monster_struct.cpp"
using namespace std;
void rand_monster(monster_attribute *monster){
    srand(time(0));
    int type = rand() % 10;
    if(type == 0){
        monster->name = "Monster wolf";
        monster->strength = 15;
        monster->luck = 3;
        monster->HP = 20;
    }
    else if(type == 1){
        monster->name = "Giant Ant";
        monster->strength = 10;
        monster->luck = 6;
        monster->HP = 15;
    }

    else if(type == 2){
        monster->name = "Black Rat";
        monster->strength = 10;
        monster->luck = 3;
        monster->HP = 15;
    }

    else if(type == 3){
        monster->name = "Dark Bat";
        monster->strength = 8;
        monster->luck = 8;
        monster->HP = 10;
    }

    else if(type == 4){
        monster->name = "Charging Boar";
        monster->strength = 20;
        monster->luck = 1;
        monster->HP = 20;
    }

    else if(type == 5){
        monster->name = "Troll";
        monster->strength = 20;
        monster->luck = 1;
        monster->HP = 20;
    }

    else if(type == 6){
        monster->name = "Mutated Alligator";
        monster->strength = 20;
        monster->luck = 3;
        monster->HP = 15;
    }

    else if(type == 7){
        monster->name = "Basilisk";
        monster->strength = 15;
        monster->luck = 5;
        monster->HP = 10;
    }

    else if(type == 8){
        monster->name = "Underground Worm";
        monster->strength = 10;
        monster->luck = 2;
        monster->HP = 20;
    }

    else if(type == 9){
        monster->name = "Cursed Knight";
        monster->strength = 20;
        monster->luck = 5;
        monster->HP = 20;
    }
}
