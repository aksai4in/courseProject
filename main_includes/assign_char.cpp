#include <iostream>
#include "structs.cpp"
using namespace std;
void assign_char(string type, player *player){
    if(type == "1"){
        player->strength = 6;
        player->mana = 1;
        player->accuracy = 3;
    }
    else if(type == "2"){
        player->strength = 3;
        player->mana = 1;
        player->accuracy = 6;
    }
    else if(type == "3"){
        player->strength = 1;
        player->mana = 6;
        player->accuracy = 3;
    }
}