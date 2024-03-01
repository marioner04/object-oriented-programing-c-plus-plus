#include "RPG.h"
#include <iostream>

using namespace std;

int main() {
    string name;
    int health;
    int strength;
    int defense;
    string type;

    RPG lol = RPG("NPC", 100, 10, 10, "warrior"); //overloaded RPG

    cout << "Name: " << lol.get_name() << endl;
    cout << "Health: " << lol.get_health() << endl;
    cout << "Strength: " << lol.get_strength() << endl;
    cout << "Defense: " << lol.get_defense() << endl;

    RPG lul = RPG(); //default RPG

    cout << "\nDefault RPG" << endl;
    cout << "Name: " << lul.get_name() << endl;
    cout << "Health: " << lul.get_health() << endl;
    cout << "Strength: " << lul.get_strength() << endl;
    cout << "Defense: " << lul.get_defense() << endl;

    return 0;

}
