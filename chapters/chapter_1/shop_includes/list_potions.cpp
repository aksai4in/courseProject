#include <iostream>
#include <iomanip>
using namespace std;
void list_potions(player *player){
    cout << "MY POTIONS\n";
    cout << setw(2) << "#" << setw(10) << "NAME" << setw(5) << "POWER" << endl;
    for(int i = 0; i < player->my_potions.size(); i++){
        cout << setw(2) << i  << setw(10) << player->my_potions.name << setw(5) <<  player->my_potions.power << endl;
    }
}