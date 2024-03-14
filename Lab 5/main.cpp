#include "RPG.h"
#include <iostream>

using namespace std;

void display_stat(RPG player1, RPG player2)
{
}

void display_end(RPG player1, RPG player2)
{
    if (player1.get_health() > 0)
    {
        cout << "\nWiz won!" << endl;
        cout << "Good game!" << endl;
    }
    else
    {
        cout << "\nNPC won!" << endl;
        cout << "Good game!" << endl;
    }
}

void game_loop(RPG *player1, RPG *player2)
{

    while (player1->get_health() > 0 && player2->get_health() > 0)
    {
        cout << "Wiz health: " << (*player1).get_health() << "   ";
        cout << "NPC health: " << (*player2).get_health() << endl;
        cout << "Wiz turn!" << endl;
        (*player1).use_skill(player2);

        if (player2->get_health() > 0)
        {
            cout << "Wiz health: " << (*player1).get_health() << "   ";
            cout << "NPC health: " << (*player2).get_health();
            cout << "\nNPC turn!" << endl;

            (*player2).use_skill(player1);
        }
    }
}

int main()
{
    string name;
    int health;
    int strength;
    int defense;
    string type;

    RPG p1 = RPG("Wiz", 70, 20, 15, "mage"); // overloaded RPG

    // cout << "Name: " << p1.get_name() << endl;
    // cout << "Health: " << p1.get_health() << endl;
    //cout << "Strength: " << p1.get_strength() << endl;
    //cout << "Defense: " << p1.get_defense() << endl;
    //cout << p1.is_alive() << endl;

    RPG p2 = RPG(); // default RPG

    //cout << "\nDefault RPG" << endl;
    //cout << "\nName: " << p2.get_name() << endl;
    //cout << "Health: " << p2.get_health() << endl;
    //cout << "Strength: " << p2.get_strength() << endl;
    //cout << "Defense: " << p2.get_defense() << endl;
    //cout << p2.is_alive() << endl;
    
    game_loop(&p1, &p2);
    display_end(p1, p2);
    display_stat(p1, p2);
    

    return 0;
}
