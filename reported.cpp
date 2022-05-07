#include <iostream>
using namespace std;

//Input: pointer to the struct storing player's attributes
//Output: player's attributes will be deleted by the function
//Function: Let the player leave the village if the player refuses to help. The player would eventually die.

void reported(attribute *player){
    cout << "After you leave the farmer, he reports you to the head of the village.\n";
    cin.get();
    cout << "The head of the village decides to expell you from the village.\n";
    cin.get();
    cout << "You have gone to the forest by yourself with no directions.\n";
    cin.get();
    cout << "On the second day of your journey, you come across a monster-wolf.\n";
    cin.get();
    cout << "In a fierce battle you are able to defeat him, but you lose your arm and die from the blood loss.\n\n\n";
    cout << "GAME OVER\n\n";
    cout << "***To retry, please restart the game and load your saved progress.***";
    delete player;
    exit(0);
}