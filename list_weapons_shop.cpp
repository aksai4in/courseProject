#include <iostream>
using namespace std;
void list_weapons_shop(){
    cout << setw(30) << "WEAPONS LIST\n";
    cout << setw(2) << "#" << setw(25) << "NAME" << setw(9) << "POWER" << setw(9) << "PRICE" << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(2) << i  << setw(25) << weapons[i].name << setw(9) <<  weapons[i].power << setw(9) << weapons[i].price << endl;
    }
}
