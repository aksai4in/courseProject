#include <iostream>
//#include "monster_includes/fight_monster.cpp"
#include "monster_includes/run_away_monster.cpp"
#include "monster_includes/rand_monster.cpp"
using namespace std;

void fight_monster(monster_attribute *monster, attribute *player){
    srand(time(0));
    if (player->role == "Warrior"){
        cout << "***You draw your sword out and prepare to fight " << monster->name << ".***\n";
        cin.get();
    }

    else if (player->role == "Archer"){
        cout << "***You draw an arrow out and prepare to fight " << monster->name << ".***\n";
        cin.get();
    }

    else (player->role == "Warrior"){
        cout << "***You draw your sword out and prepare to fight " << monster->name << ".***\n";
        cin.get();
    }



    while (monster->HP > 0 && player->HP > 0){
        cout << "***Your HP now is " << player->HP << ".***\n\n";
        cout << "***" << monster->name << " HP now is " << monster->HP << ".***\n\n"
        cout << "***What do you want to do?***\n";

        cout << "***You attack " << monster->name << "!***\n";

        monster->HP = monster->HP - player->strength;
            
        if (rand()%10 < player->luck){
            cout <<"\n***You successfully deliver extra damage!***\n";
            monster->HP = monster->HP - player->strength*0.5;
        }

        cin.get();

        cout << "***" << monster->name << " attack you!***\n";

        player->HP = player->HP - monster->strength;
            
        if (rand()%10 < monster->luck){
            cout <<"\n***Monster delivers extra damage!***\n";
            player->HP = player->HP - monster->strength*0.5;
        }

        cin.get();
    }


    while (monster->HP > 0 && player->HP > 0){
        
    }

    cout << "***You defeated the monster!***\n";
    cin.get();
    cout << "***You continue your travel***\n";
    cin.get();
}

void monster_encounter(attribute *player){
    monster_attribute *ptr_monster;
    ptr_monster = new monster_attribute;
    cout << "***As you make your way in the forest, you come here some strange noise in the vicinity***\n";
    cin.get();
    rand_monster(ptr_monster);
    cout << "***You come closer to the source of the moise and see " << ptr_monster->name << "!***\n";
    cin.get();
    cout << "press 1 to see monsters's characteristics\n";
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
        cout << "   monster strength: " << ptr_monster->strength << "\n";
        cout << "   monster luck: " << ptr_monster->luck << "\n";
        cout << "   monster HP: " << ptr_monster->HP << "\n";
        cin.get();
        cout << "press 1 to start a fight\n";
        cout << "press 2 to escape\n";
        cout << "Your choice > ";
        cin >> answer;
        while(answer != "1" && answer != "2"){
            cout << "***unknown choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }
        if(answer == "1") {fight_monster(ptr_monster, player);}
        else if(answer == "2"){run_away_monster();}
    }
    else if(answer == "2"){
        fight_monster(ptr_monster, player);
    }
    else if(answer == "3"){
        run_away_monster();
    }

    delete ptr_monster;
}
