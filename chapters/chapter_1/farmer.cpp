#include <iostream>
using namespace std;
void farmer(string name){
    cout << " - Hey, stranger, I heard that your name is " << name << ", right? What a weird name!\n";
    cin.get();
    cout << " - Anyway, since you decided to stay in the village, would you like to help me with some tasks?\n";
    cin.get();
    cout << " - Recently there are some goblins out of nowhere from the forest near the village destroying the farmlands and stealing the crop from us.\n";
    cin.get();
    cout << " - That's unusual. Most of the time monsters won't leave the forest. Can you help me get rid of them?\n";
    cout << "press 1 for: - Yes, sure\n";
    cout << "press 2 for: - Hmm... is there any other task?\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        cout << "You receive instructions on where the last event with goblins occured, and head to that direction.\n";
        cin.get();
        cout << "After long search, you are finally able to find them hiding in the woods.\n";
        cin.get();
        cout << "There are a 8 goblins in total, so you are barely able to defeat them\n";
        cin.get();
        cout << "Finally, you return to the farmer to ask why there are now more and more monsters showing up around the village";
    }
    

}