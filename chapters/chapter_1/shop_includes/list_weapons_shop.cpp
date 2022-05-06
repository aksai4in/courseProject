#include <iostream>
using namespace std;
void list_weapons_shop(){
    cout << "WEAPONS LIST\n";
    cout << setw(2) << "#" << setw(25) << "NAME" << setw(5) << "POWER" << setw(5) << "PRICE" << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(2) << i  << setw(25) << weapons[i].name << setw(5) <<  weapons[i].power << setw(5) << weapons[i].price << endl;
    }
}
