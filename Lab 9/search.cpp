#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>

using namespace std;

int iterative_search(vector<int>v, int elem){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            return i;
        }
    }

    return -1;
}

int binary_search(vector<int> &v, int start, int end, int elem){
    if(start > end){
        return -1;
    }

    int mid = (start + end) /2;

    if(v[mid] == elem){
        return mid;
    } else if (v[mid] < elem){
        return binary_search (v, mid + 1, end, elem);
    } else {
        return binary_search (v, start, mid - 1, elem);
    }

    return binary_search (v, start, end, elem);

}


void vec_gen(string filename, vector<int> &v){
    ifstream file(filename);
    int num;
    v.clear();
    while(file.is_open() && file >> num){
        v.push_back(num);
    }
    file.close();
}


int main(){
    vector<int> v;
    vec_gen("10000_numbers.csv", v);

    vector<int> elem_to_find;
    vec_gen("test_elem.csv", elem_to_find);

    for(int i = 0; i < elem_to_find.size(); i++){
        int elem = elem_to_find[i];
        

        auto start = std::chrono::high_resolution_clock::now();
        int index_if_found = iterative_search(v, elem);
        auto end = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

        cout << "Iterative Search: " << index_if_found << " " << "Time: " << duration.count() << endl;

    };


    cout << "\n";
    for(int i = 0; i < elem_to_find.size(); i++){
        int elem = elem_to_find[i];
        

        auto start = std::chrono::high_resolution_clock::now();
        int index_if_found = binary_search(v, 0, v.size() - 1, elem);
        auto end = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

        cout << "Binary Search: " << index_if_found << " " << "Time: " << duration.count() << endl;

    }

    return 0;
}