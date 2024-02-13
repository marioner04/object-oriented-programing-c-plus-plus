#include <iostream>

using namespace std;

int main() {
    cout << "Hello Welcome to the Soccer Quiz!!" << endl;

    char question = 'y';

    string run_again = "yes";
    while (run_again == "yes") {
        cout << "\nIs Messi the best soccer player in the world?" << endl;
        cin >> question;

        if (question != 'y') {
        cout << "\nError that answer is wrong! Try again!" << endl;
    }
        else if (question == 'y') {
            run_again = "no";
        }
        
    }

    cout << "\nGbye" << endl;

    return 0;
    


}