#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Random Dice Generator" << endl;
    srand(time(0));
    char roll = 'y' and 'n';

    string run_again = "yes";
    while (run_again == "yes") {
        cout << "Roll?" << endl;
        cin >> roll;

        if (roll == 'y') {
            int number = (rand() % 6) + 1;
            cout << number << endl;
        }
        else if (roll == 'n') {
            cout << "Bye!" << endl;
            return 0;
        }
        
        }

        return 0;
    }
    
