#include <iostream>
#include "thief_includes/monster.cpp"
#include "thief_includes/fight_orc.cpp"
#include "thief_includes/run_away_orc.cpp"

using namespace std;
void thief(player *player){
    srand(time(0));
    cout << "*********************************************************************************************\n";
    cout << "***After leaving the village, you travel alone toward the cave of the dragon deep in the forest.***\n";
    cin.get();
    cout << "***It's getting drak, and you decide to take some rest.***\n";
    cin.get();
    cout << "You wake up because of some noise.\n";
    cin.get();
    cout << "You look around and see a boy trying to open you backpack\n";
    cin.get();
    cout << " - Hey! What are you doing (you)\n";
    cin.get();
    cout << " - Ah! I'm sorry, mister! I don't mean to... I have no choice! I'm sorry!\n";
    cin.get();
    cout << "***The little boy grabs your backpack and wants to get away.\n But you grab his foot before he has a chance to run away.***\n";
    cin.get();
    cout << " - Please forgive me, good mister! I'm starving!\n";
    cin.get();
    cout << " - What are you saying? Who are you? (you)\n";
    cin.get();
    cout << " - I used to live in a village nearby, but few days ago many Orcs stormed into my village and many of the villagers were killed.\n";
    cin.get();
    cout << " - The survivers fled the village, I don't know if my parents are still alive. |cries| (Boy)\n";
    cin.get();
    cout << " - I haven't eaten anything since then. I'm so hungry. I'm really sorry for stealing from you, but can you give me some food? I'm begging you!\n";
    cin.get();
    cout << "press 1 to give the boy food\n";
    cout << "press 2 to not give the boy food\n";
    string answer;
    cout << "Your choice > ";
    cin >> answer;
    while(answer != "1" && answer != "2"){
        cout << "***unknown choice, please try again***\n";
        cout << "Your choice > ";
        cin >> answer;
    }
    if(answer == "1"){
        cout << "***Feeling sorry for the little boy, you hand over few slices of bread to him.\n He shovels all of them into his mouth and munches on them. He barely chews before he swallows them.***\n";
        cin.get();
        cout << " - So what's your plan? Are you going to look for your parents? (you)\n";
        cin.get();
        cout << " - I don't know. I miss them, but I'm scared. I don't want to run into any monster again. (boy)\n";
        cin.get();
        cout << " - Would you mind if I follow you for a while? This trail can also lead to my village. Maybe my parents are hiding in the forest around the village. (boy)\n";
        cin.get();
        cout << "***Figuring that the little boy won't have any chance to survive alone in the forest, you allow him to follow you till you arrive at the village***\n";
        cin.get();
        cout << "***The little boy told you the village is not far away.\n You two hit the road at dawn***\n";
        cin.get(); 
        if (rand()%10 > player->luck){monster();};
        cin.get();
        if (rand()%10 > player->luck){monster();};
        cin.get();
        cout << " - It's so quiet. Where are all the animals? I cannot see any of them. What happened? (boy)\n";
        cin.get();
        cout << "***You tell the boy what you heard in the village***\n";
        cin.get();
        cout << " - What... What should we do? I just want to go home... (boy)\n";
        cin.get();
        cout << " - I'm trying to get closer to the cave where dragon lives to see if there is anyway to solve the problem, but let's just focus on your village first. (you)\n";
        cin.get();
        cout << "***You two finally arrive at the village, but you see no sign of boy's parents in the nearby forest.\n You decided to sneak into the village***\n";
        cin.get();
        cout << "***While you're approaching the little boy's house following his lead, you hear something***\n";
        cin.get();
        cout << "   AHHH!  (female voice)\n";
        cin.get();
        cout << " - That sounds like my mom's voice! (boy)";
        cin.get();
        cout << "***You rush in the direction of the scream***\n";
        cin.get();
        cout << " - No!! Go away!! Please don't !!! (Woman)\n";
        cin.get();
        cout << " - I... I'm gonna... kill you! Don't touch her! (Man)\n";
        cin.get();
        cout << "***You see seriously wounded man and woman fighting an Orc in front of the little boy's house\n";
        cin.get();
        cout << " - Dad! Mom! That's my parents! Please help them, mister!\n";
        cin.get();
        struct monster orc;
        orc.strength = 6;
        orc.luck = 4;
        orc.HP = 90;
        cout << "press 1 to see the orc's characteristics\n";
        cout << "press 2 to start a fight\n";
        cout << "press 3 to escape\n";
        cout << "Your choice > ";
        string answer;
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1"){
            cout << "   orc strength: " << orc.strength << "\n";
            cout << "   orc luck: " << orc.luck << "\n";
            cout << "   orc HP: " << orc.HP << "\n";
            cin.get();
            cout << "press 1 to save boy's parents\n";
            cout << "press 2 to to get away\n";
            cout << "Your choice > ";
            cin >> answer;
            while(answer != "1" && answer != "2"){
                cout << "***unknown choice, please try again***\n";
                cout << "Your choice > ";
                cin >> answer;
            }
            if(answer == "1") {fight_orc(player);}
            else if(answer == "2"){run_away_orc();}
        }
        else if(answer == "2"){
            fight_orc(player);
        }
        else if(answer == "3"){
            run_away_orc();
        }
    }
    else if(answer == "2"){
        cout << "Get out before it gets ungly\n";
        cin.get();
        cout << " - I barely have enough food for myself. Go away before it gets ugly! (You)\n";
        cin.get();
        cout << " - Please! A little bit of bread would help! How can you be this cruel? (boy)\n";
        cin.get();
        cout << " - Leave! It's my food! (You)\n";
        cin.get();
        cout << " - You will regret this! (boy)\n";
        cin.get();
        cout << "**After the little boy leave, you pack your stuff and prepare to hit the road.\nSuddenly, you hear some movements in a bush not from you**\n";
        cin.get();
        if (rand()%10 > player->luck){monster();};
        cin.get();
        if (rand()%10 > player->luck){monster();};
        cout << "***When you're going deeper and deeper into the forest, it's become more difficult to tell the direction.***\n";
        cin.get();
        cout << "***Even though you've been following the trail, you start to wonder whether you're still on the right track because something seems off***\n";
        cin.get();    
        if (rand()%10 > player->luck){monster();};
        cout << "***Not knowing the correct direction while keeping bumping into monsters, you panic and wander away from the trail***\n";
        cin.get();
        cout << "***All of a sudden, you hear many foodsteps behind of you***\n";
        cin.get();
        cout << "***You slowly turn around and desperately find that dozens of orcs are charging to you***\n";
        cin.get();
        cout << "***You know that there is no way you can run away from them, so you choose to fight for your seemingly last stand***\n";
        cin.get();        
        cout << "***When you're severely wounded by orcs, the little boy appears in front of you***\n";
        cin.get();
        cout << "***It turns out that the little boy keeps on luring monsters to come to you and attack you along the way here***\n";
        cin.get();
        cout << "***Knowing that he is about to starve to death, the little boy doesn't care if he would be attacked by orcs, too***\n";
        cin.get();
        cout << "***He only wants his revenge on you, and you're going to die with him soon***\n";
    }
}   