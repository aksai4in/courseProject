#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
#include <string>
#include <vector>
#include "assign_char.cpp"
#include "save.cpp"
#include "list_potions.cpp"
#include "list_weapons.cpp"
#include "monster_struct.cpp"
#include "fight_monster.cpp"
#include "farmer.cpp"
#include "hunter.cpp"
#include "shop.cpp"
#include "continue_missions.cpp"
#include "thief.cpp"
#include "knight.cpp"
#include "no_knight.cpp"
using namespace std;

//Input: player inputs as the choice of actions
//Output: player's attributes can be affected depending on player's actions and interactions within each storyline
//Function: the main function where all the story unfolds

int main(){
    string name, answer;
    //Create the pointer to store player's attributes
    attribute *player;
    int storyline_choice;
    player = new attribute;
    //Player can choose to start or new game or load the previous gameplay
    cout << "Press 1 to start a new game\n";
    cout << "Press 2 to load an existing game\n";
    cout << "Your choice > ";
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        cout << "You have been reincarnated into a different world.\n";
        cin.get(); 
        cout << "You find yourself in the forest hungry and thirsty.\n";
        cin.get();
        cout << "Suddenly, you hear footsteps behind you.\n";
        cin.get();
        cout << " - What are you doing here, stranger? It is dangerous at this time of the day.(hunter)\n";
        
        cout << "   Press 1 for: I got lost...\n";
        cout << "   Press 2 for: Did you say dangerous?\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            cout << " - Unlucky day, huh? Let me take you to the nearby village. (hunter)\n";
            cin.get();
            cout << " - By the way, what is your name?(hunter)\n";
        }
        else if(answer == "2"){
            cout << " - Didn't you hear the rumors? There is an evil dragon flying around and causing people trouble. (hunter)\n";
            cin.get();
            cin.get();
            cout << " - Some people say, it can even disguise itself as something different... (hunter)\n";
            cin.get();
            cout << " - In any case, you don't look very well, let me escort you to the nearby village. (hunter)\n";
            cin.get();
            cout << " - May I know your name? (hunter)\n";
        }
        cout << "Plese input your name > ";
        getline(cin, name);
        while(name == "" || name.find_first_not_of(' ') == string::npos){
            cout << "Plese input your name > ";
            getline(cin, name);
        }
        player->name = name;
        cout << " - " << name << ", huh. I am Burnson. (hunter)\n";
        cin.get();
        cout << " - Anyway, let's head to the village. (Burnson)\n";
        cin.get();
        cout << "*********************************************************************************************\n";
        cout << "***After arriving to the village and getting some food and rest, you realized that you have ***\n";
        cin.get();    
        cout << "***nowhere to go in this world. You decided to stay in the village to figure things out***\n";
        cin.get();
        
        cout << " - Hey, " << name << "! I'm glad that you chose to stay with us, but you might need a job to feed yourself. (Burnson)\n"; 
        cin.get();
        cout << " - In this village, you can choose to become a warrior, archer, or mage. (Burnson)\n";
        cin.get();
        cout << " - Warriors are strong and mighty. They use swords to eliminate enemies. (Burnson)\n";
        cin.get();
        cout << " - Archers, on the other hand, are swift and fatal. They use bows and arrows to rain heavy damage on enemies. (Burnson)\n";
        cin.get();
        cout << " - Last but not least, mages are intelligent and elegant. They leverage power of spells to command natural elements to defeat their enemies. (Burnson)\n";
        cin.get();
        cout << " - Which one do you like the most, " << name << "? (Burnson)\n";
        //Let the player choose the role. The corresponding attritutes would be assigned to player
        cout << "Please choose your character: \n";
        cout << "   press 1 to choose Warrior\n";
        cout << "   press 2 to choose Archer\n";
        cout << "   press 3 to choose Mage\n";
        cout << "Your choice > ";
        string a[3] = {"a Warrior", "an Archer", "a Mage"};
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unkonwn choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        cout << " - So you want to be " << a[stoi(answer) - 1] << "? (Burnson)\n";
        cin.get();
        cin.get();
        cout << " - Well, may the god help you with your trainings! (Burnson)\n\n";
        cin.get();
        cout << "*********************************************************************************************\n";
        cin.get();
        assign_char(answer, player);
        cout << "***You are now "<<  a[stoi(answer) - 1] << ". Here are your ability attributes***\n";
        cout << "   Physical stregth level: " << player->strength << "\n";
        cout << "   Maggical power level: " << player->intelligence << "\n";
        cout << "   Shooting accuracy level: " << player->luck << "\n";
        cin.get();
        //Farmer or hunter storyline would be randomly selected as the upcoming part of the story
        srand(time(0));
        int first_story_line = rand() % 2;
        if(first_story_line == 0){
            farmer(player);
        }
        else if(first_story_line == 1){
            hunter(player);
        }
        cout << "Would you like to visit the village shop?\n";
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
            shop(player);
        }
        //After the mission, player can choose to continue working on side missions to earn money and experience points
        continue_missions(player);
        cout << "Would you like to save the game? (Unsaved progress will be lost if you die or quit the game)\n";
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
            //After each chapter, player can choose to save the progress
            save(player, 1);
        }
        //Player can also choose whether he would like to proceed to the next chapter
        cout << "\nWould you like to continue?\n";
        cout << "press 1 for yes\n";
        cout << "press 2 for no\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "2"){
            delete player;
            exit(0);
        }
        
        //Player enters the second chpater, the the decisions made in this cahpter would after the story of chapter 3
        thief(player, storyline_choice);
        cout << "Would you like to save the game?\n";
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
            save(player, 2);
        }

        cout << "\nWould you like to continue?\n";
        cout << "press 1 for yes\n";
        cout << "press 2 for no\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "2"){
            delete player;
            exit(0);
        }        

        //Storyline with or without knights will be randomly selected as the story of chapter 3
        if(rand()%2 == 0){
            knight(storyline_choice, player);
        }

        else{
            no_knight(storyline_choice, player);
        }
    }

    else if(answer == "2"){
        ifstream fin;
        fin.open("chapter2.txt");
        if(fin.fail()){
            ifstream fin;
            fin.open("chapter1.txt");
            if(fin.fail()){
                cout << "***There are no saved games***\n";
                exit(1);
            }
            int wsize, psize;
            getline(fin, player->name);
            fin >> player->role >> player->HP >> player->strength >> player->intelligence >> player->luck >> player->experience_points >> player->money;
            fin.get();
            string name;
            getline(fin, name);
            fin >> wsize;
            fin.get();
            for(int j = 0; j < 10; j++){
                if(weapons[j].name == name){
                    player->current_weapon = weapons[j];
                }
            }
            for(int i = 0; i < wsize; i++){
                getline(fin, name);
                for(int j = 0; j < 10; j++){
                    if(weapons[j].name == name){
                        player->my_weapons.push_back(weapons[j]);
                    }
                }
            }
            fin >> psize;
            fin.get();
            for(int i = 0; i < psize; i++){
                string name;
                getline(fin, name);
                for(int j = 0; j < 3; j++){
                    if(potions[j].name == name){
                        player->my_potions.push_back(potions[j]);
                    }
                }
            }

            fin.close();

            thief(player, storyline_choice);
            cout << "Would you like to save the game?\n";
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
                save(player, 2);
            }

            cout << "\nWould you like to continue?\n";
            cout << "press 1 for yes\n";
            cout << "press 2 for no\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "1" && answer != "2"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }

            if(answer == "2"){
                delete player;
                exit(0);
            }        

            if(rand()%2 == 0){
                knight(storyline_choice, player);
            }

            else{
                no_knight(storyline_choice, player);
            }            
        }

        else{
            int wsize, psize;
            getline(fin, player->name);
            fin >> player->role >> player->HP >> player->strength >> player->intelligence >> player->luck >> player->experience_points >> player->money;
            fin.get();
            string name;
            getline(fin, name);
            fin >> wsize;
            fin.get();
            for(int j = 0; j < 10; j++){
                if(weapons[j].name == name){
                    player->current_weapon = weapons[j];
                }
            }
            for(int i = 0; i < wsize; i++){
                getline(fin, name);
                for(int j = 0; j < 10; j++){
                    if(weapons[j].name == name){
                        player->my_weapons.push_back(weapons[j]);
                    }
                }
            }
            fin >> psize;
            fin.get();
            for(int i = 0; i < psize; i++){
                string name;
                getline(fin, name);
                for(int j = 0; j < 3; j++){
                    if(potions[j].name == name){
                        player->my_potions.push_back(potions[j]);
                    }
                }
            }
            fin.close();
            if(rand()%2 == 0){
                knight(storyline_choice, player);
            }

            else{
                no_knight(storyline_choice, player);
            } 
        }
    }
}

    