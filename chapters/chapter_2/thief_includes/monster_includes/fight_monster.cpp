#include <iostream>
using namespace std;

void fight_monster(monster_attribute *monster, attribute *player){
    srand(time(0));

    if (player->role == "Warrior"){
        cout << "***You draw your sword out and prepare to fight " << monster->name << ".***\n";
    }

    else if (player->role == "Archer"){
        cout << "***You draw an arrow out and prepare to fight " << monster->name << ".***\n";
    }

    else if (player->role == "Mage"){
        cout << "***You draw your wand out and prepare to fight " << monster->name << ".***\n";
    }

    cin.get();

    while (monster->HP > 0 && player->HP > 0){
        cout << "***Your HP now is " << player->HP << ".***\n\n";
        cout << "***" << monster->name << " HP now is " << monster->HP << ".***\n\n";
        cout << "***What do you want to do?***\n";

        cout << "***You attack " << monster->name << "!***\n";

        monster->HP = monster->HP - player->strength;
            
        if (rand()%10 < player->luck){
            cout <<"\n***You successfully deliver extra damage!***\n";
            monster->HP = monster->HP - player->strength*0.5;
        }

        if (monster->HP <= 0){
            cout << "***You defeated the monster!***\n";
            cin.get();
            cout << "***You continue your travel***\n";
            cin.get();    
            break;
        }

        cin.get();

        cout << "***" << monster->name << " attack you!***\n";

        player->HP = player->HP - monster->strength;
            
        if (rand()%10 < monster->luck){
            cout <<"\n***Monster delivers extra damage!***\n";
            player->HP = player->HP - monster->strength*0.5;
        }

        if (player->HP <= 0){
            cout << "***You are killed by the monster!***\n";
            cin.get();   
            break;
        }
    }
}