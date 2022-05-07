#include <iostream>
#include "continue_missions_includes/upgrade.cpp"
using namespace std;
// function for if a player wants to continue taking village missions after chapter 1
void continue_missions(attribute *player){
    cout << "***Would you like to continue going on village missions?***\n";
    cout << "press 1 for: yes, I will take mor missions\n";
    cout << "press 2 for: no, I will move on\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    while(answer != "2"){
        cout << "***What mission would you like to take?***\n";
        cout << "press 1 for slimes\n";
        cout << "press 2 for goblins\n";
        cout << "press 3 for deer\n";
        cout << "press 4 for rabbits\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3" && answer != "4"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            slimes(player);
        }
        else if(answer == "2"){
            goblins(player);
        }
        else if(answer == "3"){
            deer(player);
        }
        else if(answer == "4"){
            rabbits(player);
        }
        cout << "***You received 20 gold coins***";
        player->money += 20;
        cout << "Your money > " << player->money << "\n";
        cin.get();
        cout << "***You received 10 experience points***";
        player->experience_points += 10;
        cout << "Your experience points > " << player->experience_points << "\n";
        cin.get();
        cout << "***Whould you like to upgrade your charecter?***\n";
        cout << "press 1 for yes\n";
        cout << "press 2 for no\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            upgrade(player);
        }
        cin.get();
        cout << "press 1 to take more missions\n";
        cout << "press 2 to move on\n";
        cout << "press 3 to visit the village shop\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        while(answer != "1" && answer != "2"){
            shop(player);
            cout << "press 1 to take more missions\n";
            cout << "press 2 to move on\n";
            cout << "press 3 to visit the village shop\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "1" && answer != "2" && answer != "3"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
        }
            
        
    }
}