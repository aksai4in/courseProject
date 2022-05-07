#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
#include <string>
#include <vector>
#include "main_includes/assign_char.cpp"
#include "main_includes/save.cpp"
#include "main_includes/list_potions.cpp"
#include "main_includes/list_weapons.cpp"
#include "main_includes/monster_struct.cpp"
#include "main_includes/fight_monster.cpp"
#include "chapters/chapter_1/farmer.cpp"
#include "chapters/chapter_1/hunter.cpp"
#include "chapters/chapter_1/shop.cpp"
#include "chapters/chapter_1/continue_missions.cpp"
#include "chapters/chapter_2/thief.cpp"
#include "chapters/chapter_3/knight.cpp"
#include "chapters/chapter_3/no_knight.cpp"
using namespace std;

int main(){
    string name, answer;
    attribute *player;
    player = new attribute;
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
        continue_missions(player);
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
            save(player, 1);
        }
        thief(player);
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
            fin >> player->name >> player->role >> player->HP >> player->strength >> player->intelligence >> player->luck >> player->experience_points >> player->money >> wsize;
            for(int i = 0; i < wsize; i++){
                string name;
                fin >> name;
                for(int j = 0; j < 10; j++){
                    if(weapons[j].name == name){
                        player->my_weapons.push_back(weapons[j]);
                    }
                }
            }
            fin >> psize;
            for(int i = 0; i < psize; i++){
                string name;
                fin >> name;
                for(int j = 0; j < 3; j++){
                    if(potions[j].name == name){
                        player->my_potions.push_back(potions[j]);
                    }
                }
            }
            fin.close();
            thief(player);
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
        }

        else{
            int wsize, psize;
            fin >> player->name >> player->role >> player->HP >> player->strength >> player->intelligence >> player->luck >> player->experience_points >> player->money >> wsize;
            for(int i = 0; i < wsize; i++){
                string name;
                fin >> name;
                for(int j = 0; j < 10; j++){
                    if(weapons[j].name == name){
                        player->my_weapons.push_back(weapons[j]);
                    }
                }
            }
            fin >> psize;
            for(int i = 0; i < psize; i++){
                string name;
                fin >> name;
                for(int j = 0; j < 3; j++){
                    if(potions[j].name == name){
                        player->my_potions.push_back(potions[j]);
                    }
                }
            }
            fin.close();
            
        }

    }
}

    