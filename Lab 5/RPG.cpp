#include "RPG.h"
#include <iostream>

using namespace std;

RPG::RPG()
{
    name = "NPC";
    health = 100;
    strength = 20;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}

RPG::RPG(string name, int health, int strength, int defense, string type)
{
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    this->set_skills();
}

/*
*@brief sets the skills baised on the RPG's role
*/
void RPG::set_skills()
{
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

void RPG::print_action(string skill, RPG opponent)
{
    printf("\n%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.get_name().c_str());
    cout << "-----------------------------------------" << endl;
}


/**
 * @brief updates health into new_health
 * 
 * @param new_health
*/
void RPG::update_health(int new_health)
{
    health = new_health;
}

void RPG::attack(RPG *opponent)
{
    int opponent_health = (*opponent).get_health();
    int opponent_defense = (*opponent).get_defense();
    int damage = get_strength() - opponent_defense;

    if (damage > 0) {
        int opponent_new_health = opponent_health - damage;
        (*opponent).update_health(opponent_new_health);
    } else {
        opponent_health - 0;
    }
}

void RPG::use_skill(RPG *opponent)
{
    for (int i = 0; i <= 1; i++) {
        printf("Skill %i:  %s\n", i, skills[i].c_str());
    };

    int chosen_skill_index;

    cout << "Choose a skill to use: Enter 0 or 1\n" << endl;
    cin >> chosen_skill_index;

    string chosen_skill = skills[chosen_skill_index];

    print_action(chosen_skill, *opponent);
    
    attack(opponent);
}

/**
 * @brief returns whether health is greater than 0
 * 
 * @return true
 * @return false
*/
const bool RPG::is_alive()
{
    if (health > 0) {
        cout << "Player is alive" << endl;
    } else { 
        cout << "Player is dead" << endl;
    }
    return health;
}

const string RPG::get_name()
{
    return name;
}

const int RPG::get_health()
{
    return health;
}

const int RPG::get_strength()
{
    return strength;
}

const int RPG::get_defense()
{
    return defense;
}

