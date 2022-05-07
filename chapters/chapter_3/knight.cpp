#include <iostream>
using namespace std;
void knight(int storyline_choice, attribute *player){
    cin.get();
    cout << "***You continue your trip with the little boy. Along the way you almost get lost many times, but, fortunately, the little boy is familiar with the area, and he helps you point out the right direction. After a long trip, the player arrives at the frontier of the battle between the knights and the dragon**\n";
    cin.get();
    cout << "***When you and the little boy is getting closer to the cave, you see the campsite of the kingdom knights.It seems that they're gearing up and preparing to go into the cave**\n";
    cin.get();
    cout <<" - Oh, look who's here! I know you would fight with us, " << player->name << "! (knight)\n";
    cin.get();
    cout << " - We're just about to go into the cave and kill that evil dragon.\nAre you coming? (knight)\n";
    cin.get();
    cout << " - Of course! This is why I'm here. Let's slay that dragon and save the village. (you)\n";
    cin.get();
    cout << "***You and the little boy follow the knights to sneak into the cave***\n";
    cin.get();
    if (rand()%10 > player->luck){monster_encounter(player);};
    cin.get();
    cout << " - Look! It's right there. It seems that it's asleep.\n Stay low and frosty. You won't want to wake it up. (knight)\n";
    cin.get();
    
    if(storyline_choice == 0){
        cout << "***You and Birger hold the breath and get closer to the dragon\n";
        cin.get();
        cout << "***Strangely, you don't think the dragon is evil when you finnaly get a closer look of it.\n";
        cin.get();
        cout<< "***The dragon looks innocent.\nJust like a kid.\n";
        cin.get();
        cout << "***While you're wondering whether the dragon it really evil as knights said, the knights draw their swords***\n";
        cin.get();
        cout << " - Right now! Kill this creature and save the kingdom! (knight)\n";
        cin.get();
        cout << "***The dragon opens the eyes.***\n";
        cin.get();
        cout << "***Its eyes are full of shock and you can tell that it's scared, but you have no choice but to fight.***\n";
        cin.get();

        monster_attribute *ptr_dragon;
        ptr_dragon = new monster_attribute;
        ptr_dragon->name = "Dragon";
        ptr_dragon->HP = 5;
        ptr_dragon->luck = 1;
        ptr_dragon->strength = 10; 

        fight_monster(ptr_dragon, player);
        delete ptr_dragon;

        cout << "***The dragon wails painfully.***\n";
        cin.get();
        cout << "***It looks like it's trying to tell you something, but the knights won't stop the attack.***\n";
        cin.get();
        cout << "***Soon the dragon stops moving.***\n";
        cin.get();
        cout << "***You succeed! You save the village from monsters and the attack of the dragon!***\n";
        cin.get();
        cout << "***You still don't know what the knights are hiding about the truth about the dragon.***\n";
        cin.get();
        cout << "***And now you will never know.***\n";
        cin.get();
        cout << "YOU WIN! Thank you for playing the game!\n";
        delete player;
        exit(0);
        }

    else if(storyline_choice == 1){
        cout << "***You hold your breath and try to get closer to the dragon.***\n";
        cin.get();
        cout << "***Suddenly, the little boy stands up and yells***\n";
        cin.get();        
        cout << " - My dad and mom died because of you! You monster!\nI'm gonna kill you! (boy)\n";
        cin.get();
        cout << "***The little boy grabs a stone from the ground and charges toward the dragon.***\n";
        cin.get();
        cout << "***The dragon opens its eyes before you and the knights ever have the chance to get closer***\n";
        cin.get();

        monster_attribute *ptr_dragon;
        ptr_dragon = new monster_attribute;
        ptr_dragon->name = "Dragon";
        ptr_dragon->HP = 5;
        ptr_dragon->luck = 1;
        ptr_dragon->strength = 10; 

        fight_monster(ptr_dragon, player);
        delete ptr_dragon;   

        cout << "***The dragon wails painfully.***\n";
        cin.get();
        cout << "***It looks like it's trying to tell you something, but the knights won't stop the attack.***\n";
        cin.get();
        cout << "***Soon the dragon stops moving.***\n";
        cin.get();
        cout << "***You succeed! You save the village from monsters and the attack of the dragon!***\n";
        cin.get();
        cout << "***You still don't know what the knights are hiding about the truth about the dragon.***\n";
        cin.get();
        cout << "***And now you will never know.***\n";
        cin.get();
        cout << "YOU WIN! Thank you for playing the game!\n";
        delete player;
        exit(0);
    }
}