#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

//Input: pointer to the struct of the monster's attributes, pointer to the struct storing player's attributes
//Output: player's attributes might be affected during the battle with monster in the function
//Function: Let the player fight with the monster if encounter. The battle would be affected by the player's and the monster's attributes

void fight_monster(monster_attribute *monster, attribute *player){
    srand(time(0));
    string answer;
    double player_damage = 0;
    cout << fixed;
    cout << setprecision(2);
    
    if (player->role == "Warrior"){
        cout << "\n***You draw your sword out and prepare to fight " << monster->name << "***\n";
        player_damage = player->strength*player->current_weapon.power;
    }

    else if (player->role == "Archer"){
        cout << "\n***You draw an arrow out and prepare to fight " << monster->name << "***\n";
        player_damage = player->strength*player->current_weapon.power;    
    }

    else if (player->role == "Mage"){
        cout << "\n***You draw your wand out and prepare to fight " << monster->name << "***\n";
        player_damage = player->intelligence*player->current_weapon.power;    
    }

    cin.get();

    while (monster->HP > 0 && player->HP > 0){
        cout << "***Your HP now is " << player->HP << "***\n\n";
        cout << "***" << monster->name << " HP now is " << monster->HP << "***\n\n";
        cout << "***What do you want to do?***\n";
        cout << "   press 1 to attack\n";
        cout << "   press 2 to switch your weapon\n";
        cout << "   press 3 to drink potion\n";
        cin >> answer;
        while(answer != "1" && answer != "2" && answer != "3"){
            cout << "\n***unkonwn choice, please try again***\n";
            cout << "Your choice > ";
            cin >> answer;
        }

        if (answer == "1"){
            cout << "\n***You attack " << monster->name << "!***\n";

            monster->HP = monster->HP - player_damage;
            cout << "\n***You make " << player_damage << " damage.***\n";
                
            if (rand()%10 < player->luck){
                cout <<"\n***You successfully deliver extra damage!***\n";
                monster->HP = monster->HP - player_damage*0.5;
                cout << "\n***You make " << player_damage*0.5 << " damage***\n";
            }

            if (monster->HP <= 0){
                cout << "\n***You defeated the monster!***\n";
                cin.get();
                break;
            }

            cin.get();

            cout << "\n***" << monster->name << " attacks you!***\n";

            player->HP = player->HP - monster->strength;
            cout << "\n*** " << monster->name <<  " make " << monster->strength << " damage***\n";

            if (rand()%10 < monster->luck){
                cout <<"\n***Monster delivers extra damage!***\n";
                player->HP = player->HP - monster->strength*0.5;
                cout << "\n*** " << monster->name <<  " make " << monster->strength*0.5 << " damage***\n";
            }

            if (player->HP <= 0){
                cout << "\n***You are killed by the monster!***\n";
                cin.get();
                cout << "GAME OVER\n\n";
                cout << "***To retry, please restart the game and load your saved progress***";
                delete monster;
                delete player;
                exit(0);
            }
        }

        else if (answer == "2"){
            list_weapons(player);
            cout << "***Which weapon would you like to use? Please input its number***\n";
            cin >> answer;

            while(stoi(answer) < 0 || stoi(answer) >= player->my_weapons.size()){
                cout << "***unkonwn choice, please try again***\n\n";
                cout << "Your choice > ";
                cin >> answer;
            }
        
            player_damage = player_damage*(player->my_weapons[stoi(answer)].power/player->current_weapon.power);
            player->current_weapon = player->my_weapons[stoi(answer)];
            cout << "***You equip " << player->current_weapon.name << "***\n";        
        }

        else if (answer == "3"){
            list_potions(player);
            cout << "***Which potion would you like to use? Please input its number (Input -1 to exit)***\n";
            cin >> answer;
            
            if (answer != "-1"){
                while(stoi(answer) < 0 || stoi(answer) >= player->my_potions.size()){
                    cout << "***unkonwn choice, please try again***\n";
                    cout << "Your choice > ";
                    cin >> answer;
                }        

                player->HP = player->HP + player->my_potions[stoi(answer)].power;

                cout << "***You drink the " << player->my_potions[stoi(answer)].name << " potion***\n";

                player->my_potions.erase(player->my_potions.begin()+stoi(answer));

                if (player->HP > 100){
                    player->HP = 100;
                }         
            }
        }
    }
}