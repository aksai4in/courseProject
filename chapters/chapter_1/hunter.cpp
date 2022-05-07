#include <iostream>
#include "hunter_includes/deer.cpp"
#include "hunter_includes/rabbits.cpp"
#include "hunter_includes/goes_to_forest.cpp"
using namespace std;
//function for a hunter storyline in chapter 1
void hunter(attribute *player){
    cout << "Hey, buddy! glad to see that you're doing much better now. (Burnson)\n";
    cin.get();
    cout << "You were in pretty poor shape when I first saw you in the forest. (Burnson)\n";
    cin.get();
    cout << "I've been looking for you. You see, I need help with some tasks. (Burnson)\n";
    cin.get();
    cout << "Do you remember when I found you in the forest? Back then, I was actually looking for prey. (Burnson)\n";
    cin.get();
    cout << "Recently, it's getting harder and harder to hunt in the forest. Would you like to hunt some deers for me? (Burnson)\n";
    cin.get();
    cout << "   press 1 for: - Sure, I can do that.\n";
    cout << "   press 2 for: - I never hunted deer before. I don't know if I can so that.\n";
    cout << "Your choice > ";
    string answer;
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        cout << " - Deer are pretty difficult to find these days. So I don't expect much from you.\n";
        cin.get();
        cout << " - But the pay is good if you do kill one\n";
        cin.get();
        cout << " - I would suggest you go the north side of the ...\n";
        cin.get();
        deer();
    }
    else if(answer == "2"){
        cout << " - HA-HA! Of course, what was I thinking? It's probably too early for you to hunt deer. (Burnson)\n";
        cin.get();
        cout << " - How about this? Can you hunt some rabbits for me? (Burnson)\n";
        cout << "   press 1 for: - Rabbits seem easier, I'll take the job\n";
        cout << "   press 2 for: - Actually, deers shouldn't be that difficult to hunt. I'll go for them.\n";
        cout << "   press 3 for: - Nuh, I'm good\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            cout << " - Rabbits are easier to find than deer.\n";
            cin.get();
            cout << " - So, how about you find 5 of them? Sounds good?\n";
            cin.get();
            cout << " - I would suggest you go the East side of the ...\n";
            cin.get();
            rabbits();
        }
        else if(answer == "2"){
            cout << " - Deer are pretty difficult to find these days. So I don't expect much from you.\n";
            cin.get();
            cout << " - But the pay is good if you do kill one\n";
            cin.get();
            cout << " - I would suggest you go the north side of the ...\n";
            cin.get();
            deer();
        }
        else if(answer == "3"){
            cout << " - You're a lazy one aren't you? HA - HA - HA.\n";
            cin.get();
            cout << " - Now, don't get me wrong: I am not threatening you.\n";
            cin.get();
            cout << "But we are required to report anyone refusing to cooperate to the head of the village...\n";
            cin.get();
            cout << "I've heard that he is very strict: he expells everyone who has been reported. The village is going through crisis now, so these are neccesary means of surviving.\n";
            cin.get();
            cout << "If I don't report you, I risk being expelled myself\n";
            cin.get();
            cout << "If I were you, I would take the job...";
            cout << "   press 1 for: - Oh, ok, then I'll hunt a deer.\n";
            cout << "   press 2 for: - Hmm, I'll find the rabits then.\n";
            cout << "   press 3 for: - Thank you for telling me this, but I was going to leave the village anyway.\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "1" && answer != "2" && answer != "3"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
            if(answer == "1"){
                cout << " - Deer are pretty difficult to find these days. So I don't expect much from you.\n";
                cin.get();
                cout << " - But the pay is good if you do kill one\n";
                cin.get();
                cout << " - I would suggest you go the north side of the ...\n";
                cin.get();
                deer();
            }
            else if(answer == "2"){
                cout << " - Rabbits are easier to find than deer.\n";
                cin.get();
                cout << " - So, how about you find 5 of them? Sounds good?\n";
                cin.get();
                cout << " - I would suggest you go the East side of the ...\n";
                cin.get();
                rabbits();
            }
            else if(answer == "3"){
                cout << " - Sure, you can always leave the village. But I wouldn't suggest you do that now.\n";
                cin.get();
                cout << " - With you current skills, it would be extremely difficult to survive in the forest on your own.\n";
                cin.get();
                cout << " - You seem to have a lot of potential. It would be a waste if you died in the forest.\n";
                cin.get();
                cout << " - But the choice is yours of course.\n";
                cin.get();
                cout << "   press 1 for: - Hmm, I guess I'll take on rabbits for now then,\n";
                cout << "   press 2 for: - Very well, I will hunt the deer\n";
                cout << "   press 3 for: - I am not afraid of challenge. Don't bother reporting me: I am going to the forest.\n";
                cout << "Your coice > ";
                cin >> answer;
                while(answer != "1" && answer != "2" && answer != "3"){
                    cout << "***unknown choice, please try again***\n";
                    cout << "Your choice > ";
                    cin >> answer;
                }
                if(answer == "1"){
                    cout << " - Rabbits are easier to find than deer.\n";
                    cin.get();
                    cout << " - So, how about you find 5 of them? Sounds good?\n";
                    cin.get();
                    cout << " - I would suggest you go the East side of the ...\n";
                    cin.get();
                    rabbits();
                }
                else if(answer == "2"){
                    cout << " - Deer are pretty difficult to find these days. So I don't expect much from you.\n";
                    cin.get();
                    cout << " - But the pay is good if you do kill one\n";
                    cin.get();
                    cout << " - I would suggest you go the north side of the ...\n";
                    cin.get();
                    deer();
                }
                else if(answer == "3"){
                    goes_to_forest();
                }
            }
        }

    }
    cout << "***You have received 20 gold coins***\n";
    player->money += 20;
    cout << "Your money > " << player->money << "\n";
    cin.get();
    cout << " - Hey, Burnson, why are there so few animals in the forest?\n";
    cin.get();
    cout << " - Oh haven't the I told you about the dragon yet? (Burnson)\n";
    cin.get();
    cout << " - The dragon that had been hibernating deep in the forest just woke up.\n   The dragon had been in hibernation since the fierce battle with the knights of the kingdom 100 years ago. (Burnson)\n";
    cin.get();
    cout << " - All the monsters are now fleaing away from the dragon and showing up around the village.\n   Parents of the dragon were killed during the battle 100 years ago, and now it wants revenge. (Burnson)\n";
    cin.get();
    cout << " - Now that it's awake, it will probably also want to come to the village and destroy it. (Burnson)\n";
    cin.get();
    cout << " - But why did the knights of the kingdoms fight the dragons 100 years ago? (you)";
    cin.get();
    cout << " - To be honest, I don't know why the kingdom would like to fight the dragons deep\n   in the forest then at the first place. We were told that the dragons were planning to invade \n   the Kingdom, but for what? (Burnson)\n";
    cin.get();
    cout << " - I don't think it makes sense for the dragons to come all the way out from the forest \n   just to invade the kingdom for no reason. I think the kingdom was hiding something. Anyway, who knows. (Burnson)\n";
    cin.get();
    cout << "\n*** Still confused, you decide to ask the knights stationed in the village to learn more ***\n\n";
    cout << " - If the Kingdom said dragons were going to attack the Kingdom, then it must be the case! (knight)\n";
    cin.get();
    cout << " - Are you doubting the credibility of authorities!? (knight)\n";
    cin.get();
    cout << " - No, it is just that... (you)";
    cin.get();
    cout << " - All dragons are evil! They don't need a reason to wreak havoc! The good dragon is a dead dragon!\n";
    cin.get();
}