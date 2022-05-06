#include <iostream>
#include <iomanip>
using namespace std;
void list_potions(attribute *player){
    cout << setw(12) << "MY POTIONS\n";
    cout << setw(2) << "#" << setw(10) << "NAME" << setw(9) << "POWER" << endl;
    for(int i = 1; i < player->my_potions.size()+1; i++){
        cout << setw(2) << i  << setw(10) << player->my_potions[i].name << setw(9) <<  player->my_potions[i].power << endl;
    }
}