#include <iostream>
using namespace std;

int maincc() {
    int n = 23;
    string run_again = "yes";
    while (run_again == "yes") {
        cout << "Number?\n";
        cin >> n;
        if (n% 2 == 0) {
            cout << "n is even\n";
        } else {
            cout << "n is odd\n";
        } 
        cout << "Run again? yes or no?\n";
        cin >> run_again;
    }
    return 0;
}