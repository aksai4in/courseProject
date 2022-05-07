#include <iostream>
using namespace std;
void rabbits(attribute *player){
    cout << "***After leaving the village, you head to the forest to hunt rabbits***\n";
    cin.get();
    cout << "***You search for 3 hours and are able to find 5 rabbits***\n";
    cin.get();

    monster_attribute *ptr_pack_of_rabbits;
    ptr_pack_of_rabbits = new monster_attribute;
    ptr_pack_of_rabbits->name = "Pack of Rabbits";
    ptr_pack_of_rabbits->HP = 10;
    ptr_pack_of_rabbits->luck = 1;
    ptr_pack_of_rabbits->strength = 5; 

    fight_monster(ptr_pack_of_rabbits, player);
    delete ptr_pack_of_rabbits;

    cout << "***You kill them and head back to village***\n";
    cin.get();
}