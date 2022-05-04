#include <iostream>
#include <vector>
using namespace std;
struct weapon{
    string name;
    int damage;
};
struct potion{
    string name;
    string type;
    int effect;
};
struct player{
    string name;
    int HP = 100;
    int strength;
    int mana;
    int accuracy;
    int experiense_points = 0;
    int money = 0;
    vector<weapon> weapons;
    vector<potion> potions;
};