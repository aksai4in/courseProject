#include <iostream>
#include "structs.cpp"
using namespace std;
void assign_char(string type, attribute *player){
    if(type == "1"){
        player->role = "Warrior";
        player->strength = 6;
        player->mana = 1;
        player->luck = 3;
    }
    else if(type == "2"){
        player->role = "Archer";
        player->strength = 3;
        player->mana = 1;
        player->luck = 6;
    }
    else if(type == "3"){
        player->role = "Mage";
        player->strength = 1;
        player->mana = 6;
        player->luck = 3;
    }
}