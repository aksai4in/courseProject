#include <iostream>
using namespace std;

//Input: pointer to the struct storing player's attributes
//Output: None
//Function: Let the player go into this branch of storyline if the player choose to save the little boy's parents

void fight_orc(attribute *player){
    cout << "***You defeated the orc***\n";
    cin.get();
    cout << " - Thank you so much, mister! Without you around we'd be goners by now! (mother)\n";
    cin.get();
    cout << " - Birger, I'm so glad you're alive! |cries| (mother)\n";
    cin.get();
    cout << " - We couldn't find you when we were running away from the village, we were worried that you're still at home, so your dad and I snuck back to look for you, but we ran into this monster, and you dad were hit (mother)\n";
    cin.get();
    cout << " - Please except my deepest gratitudes mister ... ahm (father)\n";
    cin.get();
    cout << " - " << player->name << " (you)\n";
    cin.get();
    cout << " - Mister " << player->name << "! (father)\n";
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
    cout << "***After parting with Birger's parents, you two hit the road next morning***\n";
    cin.get();
}