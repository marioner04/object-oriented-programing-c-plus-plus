#include <iostream> 
using namespace std;

void dec(int y) {
    y--;
}

void dec(int *y) {
    (*y)--;
}
// Pointer y, points to the address of an int

int main() {
    int example = 3;
    int *y = &example;
    dec(y);
    cout << example << endl;
}
