#include <iostream>
using namespace std;
void deer(attribute *player){
    cout << "After leaving Burnson, you head to the forest to hunt deer\n";
    cin.get();
    cout << "You search for the whole day and are able to find one deer only very late at night\n";

    monster_attribute *ptr_deer;
    ptr_deer = new monster_attribute;
    ptr_deer->name = "Deer";
    ptr_deer->HP = 5;
    ptr_deer->luck = 1;
    ptr_deer->strength = 10; 

    fight_monster(ptr_deer, player);
    delete ptr_deer;
    
    cout << "You kill it and head back to the village\n";
    cin.get();
}