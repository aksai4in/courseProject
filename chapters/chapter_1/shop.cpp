#include <iostream>
#include "shop_includes/list_potions_shop.cpp"
//#include "shop_includes/list_potions.cpp"
#include "shop_includes/list_weapons_shop.cpp"
//#include "shop_includes/list_weapons.cpp"
using namespace std;
// Function that allows a player to go to the village shop to buy weapons and potions
void shop(attribute *player){
    cout << " - Good day, mister! (shop owner)\n";
    cin.get();
    cout << " - What would you like to buy? (shop owner)\n";
    cout << "press 1 to see weapons\n";
    cout << "press 2 to see potions\n";
    cout << "press 3 to exit the shop\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2" && answer != "3"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    while (answer != "3"){
        if(answer == "1"){
            list_weapons_shop();
            cout << "press 0-9 to buy a weapon\n";
            cout << "press 10 to not buy anything\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "0" && answer != "1" && answer != "2" && answer != "3" && answer != "4" && answer != "5" && answer != "6" && answer != "7" && answer != "8" && answer != "9" && answer != "10"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
            if(stoi(answer) < 10 && stoi(answer) > -1){
                if(player->money < weapons[stoi(answer)].price){
                    cout << "***Not enough money***\n";
                    cin.get();
                }
                else{
                    player->money -= weapons[stoi(answer)].price;
                    add_weapon(player, stoi(answer));
                    cout << "***A new item purchased***\n";
                    list_weapons(player);
                    cout << "Your money > " << player->money << "\n";
                }
            }
            else if(stoi(answer) == 10){
                cout << "***No items purchased***\n";
                cin.get();
            }
        }
        else if(answer == "2"){
            list_potions_shop();
            cout << "press 0-2 to buy a potion\n";
            cout << "press 3 to not buy anything\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "0" && answer != "1" && answer != "2" && answer != "3"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
            if(stoi(answer) < 3 && stoi(answer) > -1){
                if(player->money < potions[stoi(answer)].price){
                    cout << "***Not enough money***\n";
                    cin.get();
                }
                else{
                    player->money -= potions[stoi(answer)].price;
                    add_potion(player, stoi(answer));
                    cout << "***A new item purchased***\n";
                    list_potions(player);
                    cout << "Your money > " << player->money << "\n";
                }
            }
            else if(stoi(answer) == 10){
                cout << "***No items purchased***\n";
                cin.get();
            }
        }
        cout << "Anything else? (shop owner)\n";
        cout << "press 1 to see weapons\n";
        cout << "press 2 to see potions\n";
        cout << "press 3 to exit the shop\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
    }
    cout << " - Please come again! Have a good one! (shop owner)\n";
    cin.get();
}