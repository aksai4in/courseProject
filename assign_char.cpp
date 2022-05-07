#include <iostream>
#include "structs.cpp"
using namespace std;
// assigns characteristics to the player depending on a player's choice
void assign_char(string type, attribute *player){
    if(type == "1"){
        player->role = "Warrior";
        player->strength = 6;
        player->intelligence = 1;
        player->luck = 3;
        player->current_weapon = weapons[0];
        player->my_weapons.push_back(player->current_weapon);
    }
    else if(type == "2"){
        player->role = "Archer";
        player->strength = 3;
        player->intelligence = 1;
        player->luck = 6;
        player->current_weapon = weapons[4];
        player->my_weapons.push_back(player->current_weapon);
    }
    else if(type == "3"){
        player->role = "Mage";
        player->strength = 1;
        player->intelligence = 6;
        player->luck = 3;
        player->current_weapon = weapons[7];
        player->my_weapons.push_back(player->current_weapon);
    }
}