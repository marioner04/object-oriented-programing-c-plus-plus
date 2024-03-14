#include <iostream>
using namespace std;

int main() {
    int example = 3;
    int *p = &example;
    int *q = &example;
    cout << "p Before reassign " << *p << endl;
    cout << "q Before reassign " << *q << endl;

    example = 7;
    cout << "p After reassign " << *p << endl;
    cout << "q after reassign " << *q << endl;

    cout << "Example of memory in bytes: " << sizeof(example) << endl;
    cout << "p memory in bytes: " << sizeof(p) << endl;

    string example_str = "Hello";
    string *string_p = new string("Hello");
    cout << "string p memory in bytes: " << sizeof(string_p) << endl;

    *q = 5;
    cout << "p after reassign to 5 " << *p << endl;
    cout << "q after reassing to 5 " << *q << endl;
    cout << "Example memory in bytes: " << *q << endl;
}