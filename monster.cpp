#include <iostream>
#include "rand_monster.cpp"
#include "run_away_monster.cpp"
using namespace std;

//Input: player inputs as the choice of actions
//Output: player's attributes can be affected during the battle with the monster
//Function: the function is called when the player encounter a monster. The battle with the monster can be affected by the player's and the monster's attributes

void monster_encounter(attribute *player){
    monster_attribute *ptr_monster;
    ptr_monster = new monster_attribute;
    rand_monster(ptr_monster);
    cout << "press 1 to see monsters's characteristics\n";
    cout << "press 2 to start a fight\n";
    cout << "press 3 to escape\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2" && answer != "3"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        cout << "   monster name: " << ptr_monster->name << "\n";
        cout << "   monster strength: " << ptr_monster->strength << "\n";
        cout << "   monster luck: " << ptr_monster->luck << "\n";
        cout << "   monster HP: " << ptr_monster->HP << "\n";
        cin.get();
        cout << "press 1 to start a fight\n";
        cout << "press 2 to escape\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1") {fight_monster(ptr_monster, player);}
        else if(answer == "2"){run_away_monster();}
    }
    else if(answer == "2"){
        fight_monster(ptr_monster, player);
    }
    else if(answer == "3"){
        run_away_monster();
    }

    delete ptr_monster;
}
