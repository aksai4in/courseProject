#include <iostream>
#include <iomanip>
using namespace std;

//Input: pointer to the struct storing player's attributes
//Output: list of all the potions the player has
//Function: show all the potions the player has for player to choose from

void list_potions(attribute *player){
    cout << setw(18) << "MY POTIONS\n";
    cout << setw(2) << "#" << setw(10) << "NAME" << setw(9) << "POWER" << endl;
    for(int i = 0; i < player->my_potions.size(); i++){
        cout << setw(2) << i  << setw(12) << player->my_potions[i].name << setw(9) <<  player->my_potions[i].power << endl;
    }
}