#include <iostream>
using namespace std;
void slimes(attribute *player){
    cout << "After receiving instructions from the farmer, you head to the hideout of slimes\n";
    cin.get();
    
    monster_attribute *ptr_slime;
    ptr_slime = new monster_attribute;
    ptr_slime->name = "Slime";
    ptr_slime->HP = 3;
    ptr_slime->luck = 0;
    ptr_slime->strength = 10; 

    fight_monster(ptr_slime,player);
    delete ptr_slime;    
    
    cout << "Thanks to all your trainings, you are able to defeat them without much problem\n";
    cin.get();
}