#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string>
#include <vector>
#include "pokemon.h"

using namespace std;

class Charmander : public Pokemon{
    public:

        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);

        void speak();
        void print_stats();

    private:
        vector<string> skills;

};

#endif
