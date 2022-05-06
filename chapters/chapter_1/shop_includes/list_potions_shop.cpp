#include <iostream>
#include <iomanip>
using namespace std;
void list_potions_shop(){
    cout << "POTIONS LIST\n";
    cout << setw(2) << "#" << setw(10) << "NAME" << setw(5) << "POWER" << setw(5) << "PRICE" << endl;
    for(int i = 0; i < 10; i++){
        cout << setw(2) << i  << setw(10) << potions[i].name << setw(5) <<  potions[i].power << setw(5) << potions[i].price << endl;
    }
}