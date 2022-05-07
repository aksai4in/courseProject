#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//Input: pointer to the struct storing monster's attributes
//Output: characteristics of a randomly selected monster will be assigned as the attributes of the monster player encounter
//Function: the function randomly selected a kind of monster and assign the characteristics as the attributes of the monster encountered by player

void rand_monster(monster_attribute *monster){
    srand(time(0));
    int type = rand() % 10;
    if(type == 0){
        monster->name = "Monster wolf";
        monster->strength = 14;
        monster->luck = 3;
        monster->HP = 15;
    }
    else if(type == 1){
        monster->name = "Giant Ant";
        monster->strength = 10;
        monster->luck = 6;
        monster->HP = 12;
    }

    else if(type == 2){
        monster->name = "Black Rat";
        monster->strength = 12;
        monster->luck = 3;
        monster->HP = 13;
    }

    else if(type == 3){
        monster->name = "Dark Bat";
        monster->strength = 8;
        monster->luck = 8;
        monster->HP = 10;
    }

    else if(type == 4){
        monster->name = "Charging Boar";
        monster->strength = 15;
        monster->luck = 1;
        monster->HP = 15;
    }

    else if(type == 5){
        monster->name = "Troll";
        monster->strength = 15;
        monster->luck = 1;
        monster->HP = 18;
    }

    else if(type == 6){
        monster->name = "Mutated Alligator";
        monster->strength = 15;
        monster->luck = 3;
        monster->HP = 16;
    }

    else if(type == 7){
        monster->name = "Basilisk";
        monster->strength = 13;
        monster->luck = 5;
        monster->HP = 14;
    }

    else if(type == 8){
        monster->name = "Underground Worm";
        monster->strength = 10;
        monster->luck = 2;
        monster->HP = 12;
    }

    else if(type == 9){
        monster->name = "Cursed Knight";
        monster->strength = 15;
        monster->luck = 5;
        monster->HP = 15;
    }
}
