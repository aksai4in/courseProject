#include <iostream>
using namespace std;
// function that lets a player to upgrade one of his characteristics with experience points
void upgrade(attribute *player){
    cout << "***Which charecteristic would you like to improve?***\n";
    cout << "press 1 for stength\n";
    cout << "press 2 for intelligence\n";
    cout << "press 3 for luck\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2" && answer != "3"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        if(player->experience_points < player->strength * 10){
            cout << "***not enough experience points***\n";
        }
        else{
            player->experience_points -= player->strength * 10;
            player->strength ++;
            cout << "Strength level is now: " << player->strength << "\n";
            cin.get();
        }
    }
    else if(answer == "2"){
        if(player->experience_points < player->intelligence * 10){
            cout << "***not enough experience points***\n";
        }
        else{
            player->experience_points -= player->intelligence * 10;
            player->intelligence ++;
            cout << "Intelligence level is now: " << player->intelligence << "\n";
            cin.get();
        }
    }
    else if(answer == "3"){
        if(player->experience_points < player->luck * 10){
            cout << "***not enough experience points***\n";
        }
        else{
            player->experience_points -= player->luck * 10;
            player->luck ++;
            cout << "Luck level is now: " << player->luck << "\n";
            cin.get();
        }
    }
}
