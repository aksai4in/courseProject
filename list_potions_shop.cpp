#include <iostream>
#include <iomanip>
using namespace std;

//Input: None
//Output: list of all the potions avaialble in the shop
//Function: show all the potions available in the shop for the player to pruchase 

void list_potions_shop(){
    cout << setw(15) << "POTIONS LIST\n";
    cout << setw(2) << "#" << setw(10) << "NAME" << setw(9) << "POWER" << setw(9) << "PRICE" << endl;
    for(int i = 0; i < 3; i++){
        cout << setw(2) << i  << setw(10) << potions[i].name << setw(9) <<  potions[i].power << setw(9) << potions[i].price << endl;
    }
}