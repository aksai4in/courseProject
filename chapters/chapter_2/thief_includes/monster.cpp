#include <iostream>
// #include "monster_includes/monster_struct.cpp"
#include "monster_includes/fight_monster.cpp"
#include "monster_includes/run_away_monster.cpp"
#include "monster_includes/rand_monster.cpp"

using namespace std;
void monster(){
    cout << "***As you make your way in the forest, you come here some strange noise in the vicinity***\n";
    cin.get();
    monster monster;
    rand_monster(&monster);
    cout << "***You come closer to the source of the moise and see" << monster.name << "!***\n";
    cin.get();
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
        cout << "   monster level: " << monster.level << "\n";
        cout << "   monster luck: " << monster.luck << "\n";
        cout << "   monster HP: " << monster.HP << "\n";
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
        if(answer == "1") {fight_monster();}
        else if(answer == "2"){run_away_monster();}
    }
    else if(answer == "2"){
        fight_monster();
    }
    else if(answer == "3"){
        run_away_monster();
    }
}
