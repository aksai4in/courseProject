#include <iostream>
#include <vector>
using namespace std;
//struct for weapons
struct weapon{
    string name;
    double power;
    int price;
};
//struct for potions
struct potion{
    string name;
    int power;
    int price;
};
//struct for storing player's attibutes
struct attribute{
    string name;
    string role;
    int HP = 100;
    int strength;
    int intelligence;
    int luck;
    int experience_points = 0;
    int money = 0;
    weapon current_weapon;
    vector<weapon> my_weapons;
    vector<potion> my_potions;
};
struct weapon weapons[10] = {{"Wooden Sword", 1.05, 15}, {"Steel Sword", 1.1, 22}, {"Triple Scythe", 1.2, 35}, {"Legendary Sword Honshu", 1.4, 50}, {"Wooden Bow", 1.05, 15}, {"Elf Bow", 1.1, 22}, {"Crossbow", 1.2, 35}, {"Regular Staff", 1.05, 15}, {"Crystal Staff", 1.2, 35}, {"Magic Wand", 1.3, 45}};
// adds weapon into the weapon list of the player
void add_weapon(attribute *player, int type){
    player->my_weapons.push_back(weapons[type]);
}
struct potion potions[3] = {{"Healing 1", 10, 10}, {"Healing 2", 20, 20}, {"Healing 3", 30, 30}};
// adds potion into the potion list of the player
void add_potion(attribute *player, int type){
    player->my_potions.push_back(potions[type]);
}
