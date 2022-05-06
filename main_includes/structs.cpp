#include <iostream>
#include <vector>
using namespace std;
struct weapon{
    string name;
    double power;
    int price;
};
struct potion{
    string name;
    int power;
    int price;
};
struct player{
    string name;
    int HP = 100;
    int strength;
    int mana;
    int luck;
    int experiense_points = 0;
    int money = 0;
    vector<weapon> my_weapons;
    vector<potion> my_potions;
};
struct weapon weapons[10] = {{"Wooden sword",1.05, 15}, {"Steel sword",1.1, 22}, {"Katana",1.11, 25}, {"Triple scythe", 1.2, 35}, {"Legendary sword Honshu", 1.4, 50}, {"Wooden bow", 1.05, 15}, {"Elf bow", 1.1, 22}, {"crossbow", 1.2, 35}, {"Regular staff", 1.05, 15}, {"Crystal staff", 1.2, 35}, {"Magic wand", 1.3, 45}};
void add_weapon(player *player, int type){
    player->weapons.push_back(weapons[type]);
}
struct potion potions[3] = {{"Healing 1", 10, 10}, {"Healing 2", 20, 20}, {"Healing 3", 30, 30}};
void add_potion(player *player, int type){
    player->potions.push_back(potion[type]);
}
