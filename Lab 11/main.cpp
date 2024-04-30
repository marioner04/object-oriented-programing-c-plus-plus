#include <iostream>
#include "charmander.h"
using namespace std;

int main() {
    vector<string> pokemon_type;
    pokemon_type.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "-----------Constructor Created------------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemon_type, skills);

    cout << "\n--------Direct Speak---------\n";
    charlie.speak();

    Pokemon * p1 = &charlie;
    cout << "\n----------- Speak called from Pokemon Pointer---------------\n";
    (*p1).speak();

    Charmander * c1 = &charlie;
    cout << "\n----------- Speak called from Charmander Pointer------------\n";
    (*c1).speak();

    cout << "\n------------ Print Stats-----------\n";
    charlie.print_stats();
}