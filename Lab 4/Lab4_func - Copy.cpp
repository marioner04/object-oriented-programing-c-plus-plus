#include <iostream>
#include <string>
using namespace std;

/** sumOfThree
* @brief returns the sum of x, y, and z
*
* @param x : (int)
* @param y : (int)
* @param z : (int)
* @return int
*/

int sum_of_three(int x, int y, int z) {
    return x + y + z;
}

double division(double x, double y) {
    
    return x / y;
}

bool is_greater_than(double x, int y) {

    if (x > y) {
        cout << "x is greater than y" << endl;
    }
    else if (x < y) {
        cout << "y is greater than x" << endl;
    }
    return 0;
}

string select(string func_type) {
    string out = "";

    if (func_type == "sum") {
        cout << "The sum is: " << endl;
    }
    else if (func_type == "division") {
        cout << "The quotient is: " << endl;
    }
    else if (func_type == "comparison") {
        cout << "The first value is greater than the second value: " << endl; 
    }
    else {
        cout << "The input is invalid\n" << endl;
    }
    
    return 0;
}

template <typename T>
void  my_call(string func_type, T output) {
    cout << select(func_type) << output << endl;
}

int main() {
    int x1 = 2;
    int x2 = 3;
    int x3 = 5;

    int sum_of_three_out = sum_of_three(x1, x2, x3);
    my_call("sum", sum_of_three_out);

    double dividend = 2345.1;
    double divisor = 12345.1;

    double division_out = division(divisor, dividend);
    my_call("division", division_out);

    bool is_greater_than_out = is_greater_than(sum_of_three_out, division_out);
    my_call("comparison", is_greater_than_out);

    return 0;
}


