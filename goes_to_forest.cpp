#include <iostream>
using namespace std;
void goes_to_forest(attribute *player){
    cout << " - Well, I tried warning you. |sighs| (Burnson)\n";
    cin.get();
    cout << "***After leaving the village, you a band of goblins attacks you***\n";
    cin.get();
    cout << "***You are outnumbered, and there is noway to escape***\n";
    cin.get();
    cout << "***Goblins are able to defeat you***\n\n\n";
    cout << "GAME OVER\n\n";
    cout << "***To retry, please restart the game and load your saved progress.***";
    delete player;
    exit(0);
}