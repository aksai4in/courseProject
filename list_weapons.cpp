#include <iostream>
using namespace std;
void list_weapons(attribute *player){
    cout << setw(25) << "YOUR WEAPONS\n";
    cout << setw(2) << "#" << setw(25) << "NAME" << setw(9) << "POWER" << endl;
    for(int i = 0; i < player->my_weapons.size(); i++){
        cout << setw(2) << i << setw(25) << player->my_weapons[i].name << setw(9) <<  player->my_weapons[i].power << endl;
    }
}
