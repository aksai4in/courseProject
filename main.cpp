#include <iostream>
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
        cout << " - Unlucky day, huh? Let me take you to the near village. What is your name?(hunter)";
    }
    else if(answer == "2"){
        cout << " - Didn't you hear the rumors?\n - There is evil dragon flying around and causing trouble. Let me escort you to the village.\n";
        cout << " - May I know your name?\n";
    }
    getline(cin, name);
    cout << name << ", huh. I've never heard this name before. Where do you come from?";

}