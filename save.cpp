#include <iostream>
#include <fstream>
using namespace std;
// saves the game progress aftger 1 and 2 chapter
void save(attribute *player, int chapter){
    if(chapter == 1){
        ofstream fout;
        fout.open("chapter1.txt");
        if (fout.fail()){
            cout << "Error in saving the game" << endl;
            exit(1);
        }
        fout << player->name << "\n" << player->role << " " << player->HP << " " << player->strength << " " << player->intelligence << " " << player->luck << " " << player->experience_points << " " << player->money << "\n" << player->current_weapon.name << "\n" << player->my_weapons.size() << endl;
        for(int i = 0; i < player->my_weapons.size(); i++){
            fout  << player->my_weapons[i].name << endl;
        }
        fout << player->my_potions.size() << endl;
        for(int i = 0; i < player->my_potions.size(); i++){
            fout << player->my_potions[i].name << endl;
        }
        fout.close();
    }
    else if(chapter == 2){
        ofstream fout;
        fout.open("chapter2.txt");
        if (fout.fail()){
            cout << "Error in saving the game" << endl;
            exit(1);
        }
        fout << player->name << "\n" << player->role << " " << player->HP << " " << player->strength << " " << player->intelligence << " " << player->luck << " " << player->experience_points << " " << player->money << "\n" << player->current_weapon.name  << "\n" << player->my_weapons.size() << endl;
        for(int i = 0; i < player->my_weapons.size(); i++){
            fout << player->my_weapons[i].name << endl;
        }
        fout << player->my_potions.size() << endl;
        for(int i = 0; i < player->my_potions.size(); i++){
            fout << player->my_potions[i].name << endl;
        }
        fout.close();
    }
}