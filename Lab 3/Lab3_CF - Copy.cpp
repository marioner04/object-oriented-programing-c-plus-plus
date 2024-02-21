#include <iostream>

using namespace std;

int main() {
    
    int x = 0;
    int y = 5;

    while (x < y) {
        cout << x << endl;
        x = x + 3;
    }

    if (x % 2 == 0) {
            printf("x is even\n");
    }
    else {
            printf("x is odd\n");
    }
    
    return 0;
}