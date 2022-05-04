#include <iostream>
using namespace std;
void thief(){
    cout << "*********************************************************************************************\n";
    cout << "After leaving the village, you travel alone toward the cave of the dragon deep in the forest.\n It's getting drak, and you decide to take some rest.***\n";
    cin.get();
    cout << "You wake up because of some noise.\n";
    cin.get();
    cout << "You look around and see a boy trying to open you backpack\n";
    cin.get();
    cout << " - Hey! What are you doing (you)";
    cin.get();
    cout << " - Ah! I'm sorry, mister! I don't mean to... I have no choice! I'm sorry!\n";
    cin.get();
    cout << "***The little boy grabs your backpack and wants to get away.\n But you grab his foot before he has a chance to run away.***\n";
    cin.get();
    cout << " - Please forgive me, good mister! I'm starving!\n";
    cin.get();
    cout << " - What are you saying? Who are you? (you)";
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
        monster();
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
        cout << "press 1 to save boy's parents\n";
        cout << "press 2 to run away\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == 1){
            fight_orc();
            cout << " - Thank you so much, mister! Without you around we'd be goners by now! (mother)\n";
            cin.get();
            cout << " - Birger, I'm so glad you're alive! |cries| (mother)\n";
            ci.get();
            cout << " - We couldn't find you when we were running away from the village, we were worried that 
            you're still at home, so your dad and I snuck back to look for you, 
            but we ran into this monster, and you dad were hit (mother)\n";
            cin.get();
            cout << " - Please except my deepest gratitudes mister ... ahm (father)\n";
            cin.get();
            cout << " - " << name << " (you)\n";
            cin.get();
            cout << " - Mister " << name << "! (father)\n";
            cin.get();
            cout << " - If you didn't show up... I couldn't protect anyone... What a shame... (father)\n";
            cin.get();
            cout << " - Thank god you're safe, kiddo! But I think we need to leave soon. There may still be many monsters wandering around the village. Why on Earth did they attack us? (father)\n";
            cin.get();
            cout << "***You're explaining to the boy's parents about the dragon, when the boy interrunpts you***\n";
            cin.get();
            cout << " - I want to follow you to find the dragon! (Birger)\n";
            cin.get();
            cout << " - Huh? (you)";
            cin.get();
            cout << " - I said I want to find the dragon together with you! (Birger)\n";
            cout << " - I want to revenge the village! (Birger)\n";
            cin.get();
            cout << "***Not knowing how to respond, you look at his parents***\n";
            cin.get();
            cout << " - What are you saying, dear? (mother)\n";
            cin.get();
            cout << " - Don't joke around, kid (father)\n";
            cin.get();
            cout << " - I'm not joking! I can't forgive the dragon! I want to help to stop it! (boy)\n";
            cin.get();
            cout << " - What nonsense! It's too dangerous! You'll just be in a way! (mother)\n";
            cin.get();
            cout << " - Hmm, very well, then. (father)\n";
            cin.get();
            cout << " - Honey! Are you out of your mind as well!? (mother)\n";
            cin.get();
            cout << " - He knows the forest. He may be helpful with directions. (father)\n";
            cin.get();
            cout << "***After parting with Bireger's parents, you two hit the road next morning***\n";
            cin.get();
        }
        else if(answer == 2){
            run_away_orc();
        }

        
    }
    else if(answer == "2"){

    }
    


}   