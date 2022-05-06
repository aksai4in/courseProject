#include <iostream>
using namespace std;
void list_weapons(attribute *player){
    cout << setw(30) << "YOUR WEAPONS\n";
    cout << setw(2) << "#" << setw(25) << "NAME" << setw(5) << "POWER" << endl;
    for(int i = 1; i < player->my_weapons.size()+1; i++){
        cout << setw(2) << i << setw(25) << player->my_weapons[i].name << setw(5) <<  player->my_weapons[i].power << endl;
    }
}
