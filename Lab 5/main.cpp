#include "RPG.h"
#include <iostream>

using namespace std;

int main() {
    string name;
    int health;
    int strength;
    int defense;
    string type;

    RPG lol = RPG("YO MAMA", 100, 10, 10, "HACKER"); //overloaded RPG

    cout << "Name: " << lol.get_name() << endl;
    cout << "Health: " << lol.get_health() << endl;
    cout << "Strength: " << lol.get_strength() << endl;
    cout << "Defense: " << lol.get_defense() << endl;
    cout << "Type: " << lol.get_type() << endl;
    cout << lol.is_alive() << endl;
    

    RPG lul = RPG(); //default RPG

    cout << "\nDefault RPG" << endl;
    cout << "Name: " << lul.get_name() << endl;
    cout << "Health: " << lul.get_health() << endl;
    cout << "Strength: " << lul.get_strength() << endl;
    cout << "Defense: " << lul.get_defense() << endl;
    cout << "Type: " << lul.get_type() << endl;
    cout << lul.is_alive() << endl;

    return 0;

}
