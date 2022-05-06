#include <iostream>
#include <fstream>
using namespace std;
void save(attribute *player, int chapter){
    if(chapter == 1){
        ofstream fout;
        fout.open("chapter1.txt");
        if (fout.fail()){
            cout << "Error in saving the game" << endl;
            exit(1);
        }
        fout << player->name << " " << player->role << " " << player->HP << " " << player->strength << " " << player->intelligence << " " << player->luck << " " << player->experience_points << " " << player->money << " " << player->my_weapons.size();
        for(int i = 0; i < player->my_weapons.size(); i++){
            fout << " " << player->my_weapons[i].name;
        }
        fout << " " << player->my_potions.size();
        for(int i = 0; i < player->my_potions.size(); i++){
            fout << " " << player->my_potions[i].name;
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
        fout << player->name << " " << player->role << " " << player->HP << " " << player->strength << " " << player->intelligence << " " << player->luck << " " << player->experience_points << " " << player->money << " " << player->my_weapons.size();
        for(int i = 0; i < player->my_weapons.size(); i++){
            fout << " " << player->my_weapons[i].name;
        }
        fout << " " << player->my_potions.size();
        for(int i = 0; i < player->my_potions.size(); i++){
            fout << " " << player->my_potions[i].name;
        }
        fout.close();
    }
}