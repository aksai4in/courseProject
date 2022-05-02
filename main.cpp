#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;


int main(){
    string name, answer;
    
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
        cout << " - Unlucky day, huh? Let me take you to the nearby village.\n";
        cin.get();
        cout << " - By the way, what is your name?(hunter)\n";
    }
    else if(answer == "2"){
        cout << " - Didn't you hear the rumors? There is an evil dragon flying around and causing people trouble.\n";
        cin.get();
        cin.get();
        cout << " - Some people say, it can even disguise itself as something different...\n";
        cin.get();
        cout << " - In any case, you don't look very well, let me escort you to the nearby village.\n";
        cin.get();
        cout << " - May I know your name?\n";
    }
    cout << "Plese input your name > ";
    getline(cin, name);
    cout << " - " << name << ", huh. I am Burnson.\n";
    cin.get();
    cout << " - Anyway, let's head to the village.\n\n";
    cin.get();
    cout << "*********************************************************************************************\n";
    cout << "***After arriving to the village and getting some food and rest, you realized that you have ***\n***nowhere to go in this world. You decided to stay in the village to figure things out***\n";
    cin.get();
    cout << " - Hey, " << name << "! I'm glad that you chose to stay with us, but you might need a job to feed yourself.(Hunter)\n"; 
    cin.get();
    cout << " - In this village, you can choose to become a warrior, archer, or mage.(Hunter)\n";
    cin.get();
    cout << " - Warriors are strong and mighty. They use swords to eliminate enemies. (Hunter)\n";
    cin.get();
    cout << " - Archers, on the other hand, are swift and fatal. They use bows and arrows to rain heavy damage on enemies. (Hunter)\n";
    cin.get();
    cout << " - Last but not least, mages are intelligent and elegant. They leverage power of spells to command natural elements to defeat their enemies. (Hunter)\n";
    cin.get();
    cout << " - Which one do you like the most, " << name << "? (Hunter)\n";
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
    cout << " - So you want to be " << a[stoi(answer) - 1] << "?\n";
    cin.get();
    cout << " - Well, may the god help you with in your trainings!\n\n";
    cout << "*********************************************************************************************\n";

    srand(time(0));
    int first_story_line = rand() % 3;
    

}