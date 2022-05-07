#include <iostream>
using namespace std;

//Input: pointer to the struct storing player's attributes
//Output: player's attributes might be affected during the battle with goblin in the function
//Function: Let the player fight with the monster. The battle would be affected by the player's and the monster's attributes

void goblins(attribute *player){
    cout << "***Farmer tells you where he last saw goblins***\n";
    cin.get();
    cout << "***You head toward there immediately***\n";
    cin.get();    
    cout << "***After long search, you finally find the goblin hiding in the woods***\n";
    cin.get();

    monster_attribute *ptr_goblin;
    ptr_goblin = new monster_attribute;
    ptr_goblin->name = "Goblin";
    ptr_goblin->HP = 5;
    ptr_goblin->luck = 1;
    ptr_goblin->strength = 10; 

    fight_monster(ptr_goblin, player);
    delete ptr_goblin;
    
    cout << "***You're still unfamiliar with your weapon, so you are barely able to defeat it***\n";
    cin.get();
}