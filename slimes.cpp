#include <iostream>
using namespace std;

//Input: pointer to the struct storing player's attributes
//Output: player's attributes might be affected during the battle with slime in the function
//Function: Let the player fight with slime if he chooses to help the farmer. The battle would be affected by the player's and the monster's attributes

void slimes(attribute *player){
    cout << "***After receiving instructions from the farmer, you head to the hideout of slimes***\n";
    cin.get();
    cout << "***Searching for a long while, you finally find one slime hiding under a rock***\n";
    
    monster_attribute *ptr_slime;
    ptr_slime = new monster_attribute;
    ptr_slime->name = "Slime";
    ptr_slime->HP = 3;
    ptr_slime->luck = 0;
    ptr_slime->strength = 10; 

    fight_monster(ptr_slime,player);
    delete ptr_slime;    
    
    cout << "***Thanks to all your trainings, you are able to defeat it without much problem***\n";
    cin.get();
}