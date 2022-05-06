#include <iostream>
using namespace std;
void knight(int choice){
    cin.get();
    cout << "**You continue your trip with the little boy. Along the way you almost get lost many times, but, fortunately, the little boy is familiar with the area, and he helps you point out the right direction. After a long trip, the player arrives at the frontier of the battle between the knights and the dragon**\n";
    cin.get();
    cout << "**When you and the little boy is getting closer to the cave, you see the campsite of the kingdom knights.It seems that they're gearing up and preparing to go into the cave**\n";
    cin.get();
    cout <<"**Feeling that the knights might be hiding something about the dragon, you decide to sneak into the cave to find the dragon to talk to it to find out the truth**\n";
    cin.get();
    monster();
    cout << "**Getting deeper and deeper, you finally see the dragon.\nIt seems to be asleep.\nIt looks innocent and different from what the knights described as evil and cruel.\nIt almost looks like a kid taking a nap.**\n";
    cin.get();
    if(choice == 0){
        cout << "***You and Birger hold the breath and get closer to the dragon\n";
        cin.get();
        cout << "**The dragon opens its eyes.\nYou can tell the dragon is confused, scared, but definitely not hostile**\n";
        cin.get();
        cout << "**While you're thinking how to communicate with the dragon**\n";
        cin.get();
        cout << " - What brings you here, travelers? This is not the place you should stay (dragon)\n";
        cin.get();
        cout << " - You… You can speak?! (Birger)\n";
        cin.get();
        cout << " - You humans think I'm a monster, huh?\n You should leave now before they find out you are talking with me. (dragon)\n";
        cin.get();
        cout << " - Who?You mean the knights from the kingdom?\nWhy would they want to kill you?\nThey told me you're evil and would attack human beings.\nI don't think that's true! (you)\n";
        cin.get();
        cout << " - Nonsense! They tell everyone I'm evil so that they can justify their action to kill me!\nThey want my flesh and blood because they can extend the life of humans.\nThe knights must be sent by the king of the kingdom to kill me so that he can extend his life again. Just like what he did 100 years ago. (Dragon)\n";
        cin.get();
        cout << " - What……That's unbelievable…..(You)";
        cin.get();
        cout << " - That's the truth. Now, what are you going to do? (dragon)\n";
        cout << "press 1 to kill the dragon\n";
        cout << "press 2 to help the dragon\n";
        cout << "Your choice > ";
        string asnwer;
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "**unknown choice, please try again**\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            cout << " - I'm sorry, but your presence will scare away the monsters and make them pour into our villages.\nYou must die for our peace.(You)\n";
            cin.get();
            cout << " - Cut your nonsense.(Dragon)\n";
            cin.get();
            if(battle_with_dragon() == 1){
                cout << "The dragon wails painfully.\nIt looks like it's trying to tell you something, but the knights won't stop the attack.\n";
                cin.get();
                cout << "Soon the dragon stops moving.\nYou succeed! You save the village from monsters and the attack of the dragon!\n";
                cin.get();
                cout << "You still don't know what the knights are hiding about the truth about the dragon, and now you will never know"
                cin.get();
                cout << "YOU WIN!\n";
            }
            else{
                cout << "GAME OVER\n";
            }
        }
        else if(answer == "2"){
            cout << " - I want to help you get out of here! (you)\n";
            cin.get();
            cout << " - Are you crazy?How? (Dragon)\n";
            cin.get();
            cout << " - I saw the knights coming into the cave.\nThere is no one now outside of the cave.\nIf we can go around them and get out of the cave, we can get away! (You)\n";
            cin.get();
            cout << " - That's... What choice do I have.\nI'm counting on you then.(Dragon)\n";
            cin.get();
            battle_with_knights();
            cin.get();
            cout << " - I can't believe we actually did it! (dragon)\n";
            cin.get();
            cout << " - Haha! That was close!(boy)\n";
            cin.get();
            cout << "**While the little boy goes back to his parents, you decide to travel with the dragon further into the forest**\n";
            cin.get();
            cout << "***You don't know what's waiting for you ahead, you're not scared or worried.\nThe dragon no longer needs to be scared of the knights, and you're happy that you decided to help it\n";
            cin.get();
            cout << " - Hey, what's your name (dragon)\n";
            cin.get();
            cout << " - "<< player->name << ". How about you?\n";
            cin.get();
            cout << " - I don't know. I've never had one. (dragon)\n";
            cin.get();
            cout << " - Don't worry! We can figure one out for you later. We have all the time in the world to come up with one.(You)\n";
            cin.get();
            cout << "YOU WIN!";
        }
    }
    else if(choice == 1){
        cout << "**You hold your breath and try to get closer to the dragon.\nSuddenly, the little boy stands up and yells**\n";
        cin.get();
        cout << " - My dad and mom died because of you! You monster!\nI'm gonna kill you! (boy)\n";
        cin.get();
        cout << "**The little boy grabs a stone from the ground and charges toward the dragon.\nThe dragon opens its eyes before you and the knights ever have the chance to get closer**\n";
        cin.get();
        if(battle_with_dragon() == 1){
            cout << "The dragon wails painfully.\nIt looks like it's trying to tell you something, but the knights won't stop the attack.\n";
            cin.get();
            cout << "Soon the dragon stops moving.\nYou succeed! You save the village from monsters and the attack of the dragon!\n";
            cin.get();
            cout << "You still don't know what the knights are hiding about the truth about the dragon, and now you will never know"
            cin.get();
            cout << "YOU WIN!\n";
        }
        else{
            cout << "GAME OVER\n";
        }

    }

}