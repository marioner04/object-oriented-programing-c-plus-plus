#include <iostream>
#include <vector>

using namespace std;

void print_mem_vector (vector<int> &v) {
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++) {
    printf("Value :%i at Memory Location: %p\n", v[i], v.size() + i);
    }
}

void inc_by_10 (vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        v[i] += 10;
    }
}

int main() {
    int SIZE = 5;
    vector<int> vec = {1, 2, 3, 4, 5};
    for(int i = 0; i < SIZE; i++) {
        vec[i] = 100 + i;
    };

    printf("Before Increment-----------------------------\n");
    print_mem_vector(vec);
    inc_by_10(vec);
    printf("\n");

    printf("After Increment------------------------------\n");
    print_mem_vector(vec);
    vec.pop_back();
    printf("\n");

    printf("After Pop------------------------------------\n");
    print_mem_vector(vec);
    vec.push_back(101);
    vec.push_back(102);
    printf("\n");

    printf("After Push-----------------------------------\n");
    print_mem_vector(vec);
    printf("\n");

    return 0;

}