#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "chapters/farmer.cpp"
using namespace std;


int main(){
    string name, answer;
    
    cout << "You have been reincarnated into a different world.\n";
    cin.get(); 
    cout << "You find yourself in the forest hungry and thirsty.\n ";
    cin.get();
    cout << "Suddenly, you hear footsteps behind you.\n";
    cin.get();
    cout << " - What are you doing here, stranger? It is dnagerous at this time of the day.(hunter)\n";
    
    cout << "Press 1 for: I got lost\n";
    cout << "Press 2 for: Dangerous?\n";
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "wrong input, try again.\n";
        cin >> answer;
    }
    if(answer == "1"){
        cout << " - Unlucky day, huh? Let me take you to the near village. What is your name?(hunter)\n";
    }
    else if(answer == "2"){
        cout << " - Didn't you hear the rumors?\n - There is evil dragon flying around and causing trouble. Let me escort you to the village.\n";
        cout << " - May I know your name?\n";
    }
    cout << "Plese input your name > ";
    cin.ignore();
    getline(cin, name);
    cout << name;

    cout << ", huh. I've never heard this name before.\n Anyway, let's head to the village.\n";

    cout << "*********************************************************************************************\n";
    cout << "(After returning back to the village and getting some good rest, you realized that you have nowhere to go in this world. You decided to stay in the village for a little bit longer to figure it out)\n";

    cout << " - Hey, " << name << "! I'm glad that you chose to stay with us, but you might need a job to feed yourself.\nIn this village, you can choose to become a warrior, archer, or mage.(Hunter)\n";


    cout  << " - Warriors are strong and mighty. They use swords to eliminate enemies.\nArchers, on the other hand, are swift and fatal. They use bows and arrows to rain heavy damage on enemies.\nLast but not least, mages are intelligent and elegant. They leverage power of spells to command natural elements to defeat their enemies.(Hunter)\n";


    srand(time(0));
    int first_story_line = rand() % 3;
    

}