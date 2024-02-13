#include <iostream>
using namespace std;

int main() {
    char a [] = {'A', 'B', 'C', 'D', 'E'};
//                0    1    2    3    4 
    printf("%c\n", a[0]);
    printf("%c\n", a[1]);
    printf("%c\n", a[2]);
    printf("%c\n", a[3]);
    printf("%c\n", a[4]);

     // Loop - start, end, update

    for(int i = 0; i < 5; i++) {
        printf("%c\n",a[i]);
    }

    int j = 0;
    while (j < 5){
        printf("%c\n",a[j]);
        j++;
    }

    return 0;
}
