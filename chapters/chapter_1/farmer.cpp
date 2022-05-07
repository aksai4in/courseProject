#include <iostream>
#include "farmer_includes/slimes.cpp"
#include "farmer_includes/goblins.cpp"
#include "farmer_includes/reported.cpp"
using namespace std;
void farmer(attribute *player){
    cout << " - Hey, stranger, I heard that your name is " << player->name << ", right? What a weird name! (farmer)\n";
    cin.get();
    cout << " - Anyway, since you decided to stay in the village, would you like to help me with some tasks? (farmer)\n";
    cin.get();
    cout << " - Recently there is a goblin out of nowhere from the forest near the village destroying farmlands and stealing crop from us. (farmer)\n";
    cin.get();
    cout << " - That's unusual. Most of the time monsters won't leave the forest. Can you help me get rid of them? (farmer)\n";
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
        goblins(player);
        cout << "Finally, you return to the farmer to ask why there are now more and more monsters showing up around the village";
        cin.get();
    }
    else if(answer == "2"){
        cout << " - Oh, I see that you're scared! Ha ha ha. (Farmer)\n";
        cin.get();
        cout << " - That's fine though. I should not have such high expectations of you. (Farmer)\n";
        cin.get();
        cout << " - How about you help me to kill the slimes instead? They're much weaker. (Farmer)\n";
        cout << "   press 1 for: - Yeah, that sounds more like it. I'll take them on.\n";
        cout << "   press 2 for: - You know what? Goblins will do.\n";
        cout << "   press 3 for: - Slimes? Ehh, that is gross.\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            slimes(player);
            cout << "You return to the farmer to ask about monsters\n";
            cin.get();
        }
        else if(answer == "2"){
            goblins(player);
            cout << "Finally, you return to the farmer to ask why there are now more and more monsters showing up around the village";
            cin.get();
        }
        else if(answer == "3"){
            cout << " - You don't want to do anything, huh!? (farmer)\n";
            cin.get();
            cout << " - In that case, I'll have to report you to the head of the village!\n";
            cin.get();
            cout << " - We don't need useless people in this village!\n";
            cin.get();
            cout << "   press 1 for: - Oh, actually, I think I'll take on the slimes.\n";
            cout << "   press 2 for: - Don't you have any other task?\n";
            cout << "   press 3 for: - Go ahead! I didn't like this village in the first place!\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "1" && answer != "2" && answer != "3"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
            if(answer == "1"){
                slimes(player);
                cout << "You return to the farmer to ask about monsters\n";
                cin.get();
            }
            else if(answer == "2"){
                cout << " - At this moment, goblins and slimes are the only problems I am aware of. (farmer)\n";
                cin.get();
                cout << " - So you'll eather have to pick one or... Well you'll see for yourself. (farmer)\n";
                cout << "   press 1 for: - I'll take goblins then.\n";
                cout << "   press 2 for: - Hmm, slimes it is, then.\n";
                cout << "   press 3 for: - I don't want to do eaither, sorry.\n";
                cout << "Your choice > ";
                cin >> answer;
                while(answer != "1" && answer != "2" && answer != "3"){
                    cout << "***unknown choice, please try again***\n";
                    cout << "Your choice > ";
                    cin >> answer;
                }
                if(answer == "1"){
                    goblins(player);
                    cout << "Finally, you return to the farmer to ask why there are now more and more monsters showing up around the village";
                    cin.get();
                }
                else if(answer == "2"){
                    slimes(player);
                    cout << "You return to the farmer to ask about monsters\n";
                    cin.get();
                }
                else if(answer == "3"){
                    reported(player);
                }
            }
            else if(answer == "3"){
                reported(player);
            }
        }
    }
    cout << " - Hey, " << player->name << ", I am glad you made it back! (farmer)\n";
    cin.get();
    cout << " - Here is your reward. (farmer)\n";
    cin.get();
    cout << "***You have received 20 gold coins***";
    player->money += 20;
    cout << "Your money > " << player->money << "\n";
    cin.get();
    cout << " - Oh haven't the hunter told you about the dragon yet? (farmer)\n";
    cin.get();
    cout << " - The dragon that had been hibernating deep in the forest just woke up. (farmer)\n";
    cin.get();    
    cout << " - The dragon had been in hibernation since the fierce battle with the knights of the kingdom 100 years ago. (farmer)\n";
    cin.get();
    cout << " - All the monsters are now fleaing away from the dragon and showing up around the village. (farmer)\n";
    cin.get();
    cout << " - Parents of the dragon were killed during the battle 100 years ago, and now it wants revenge. (farmer)\n";;
    cin.get();    
    cout << " - Now that it's awake, it will probably also want to come to the village and destroy it. (farmer)\n";
    cin.get();
    cout << " - But why did the knights of the kingdoms fight the dragons 100 years ago? (you)\n";
    cin.get();
    cout << " - To be honest, I don't know why the kingdom would like to fight the dragons deep\n   in the forest then at the first place. We were told that the dragons were planning to invade \n   the Kingdom, but for what? (farmer)\n";
    cin.get();
    cout << " - I don't think it makes sense for the dragons to come all the way out from the forest \n   just to invade the kingdom for no reason. I think the kingdom was hiding something. Anyway, who knows. (farmer)\n";
    cin.get();
    cout << "\n*** Still confused, you decide to ask the knights stationed in the village to learn more ***\n\n";
    cin.get();    
    cout << " - If the Kingdom said dragons were going to attack the Kingdom, then it must be the case! (knight)\n";
    cin.get();
    cout << " - Are you doubting the credibility of authorities!? (knight)\n";
    cin.get();
    cout << " - No, it is just that... (you)\n";
    cin.get();
    cout << " - All dragons are evil! They don't need a reason to wreak havoc! The only good dragon is a dead dragon!\n";
}