#include <iostream>
#include <vector>
#include <fstream>
#include <chrono>

using namespace std;

void write_times(string filename, const vector<double> times, const vector<int> n){
    ofstream my_file(filename);
    
    my_file << "Number of Elements (n)\t Time (microseconds) " << endl;
    for(int i = 0; i < times.size(); i++){
        my_file << n[i] << "\t" << times[i] << "\n";
    }
    my_file.close();
    cout << "Wrote to " << filename << endl; 
} 

double average(const vector<double> a){
    double sum = 0;
    for(double i = 0; i < a.size(); i++){
        sum += i;
    }

    double average_elements = sum / a.size();

    return average_elements;
}

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

    vector<int> elem_to_find;
    vec_gen("test_elem.csv", elem_to_find);

    vector<int> file_sizes;
    vec_gen("sizes.csv", file_sizes);

    vector<int> v;

    vector<double> times;

    vector<double> avg;


    for(int i = 0; i < file_sizes.size(); i++){
        string filename = to_string(file_sizes[i]) + "_numbers.csv";

        vec_gen(filename, v);

        cout << filename << endl;

        times.clear();

        for(int i = 0; i < elem_to_find.size(); i++){
        int elem = elem_to_find[i];
        
        

        auto start = std::chrono::high_resolution_clock::now();
        int index_if_found = iterative_search(v, elem);
        auto end = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        double duration_double = std::chrono::duration<double>(duration).count();

        times.push_back(duration.count());

        cout << index_if_found << " " << duration.count() << endl;

        };

        double the_average_times = average(times);

        avg.push_back(the_average_times);

        

    };

    write_times("iterativeSearch_times.csv", times, file_sizes);

    avg.clear();

    
    


    cout << "\n";

    for(int i = 0; i < file_sizes.size(); i++){
        string filename = to_string(file_sizes[i]) + "_numbers.csv";

        vec_gen(filename, v);

        cout << filename << endl;

        times.clear();

        for(int i = 0; i < elem_to_find.size(); i++){
        int elem = elem_to_find[i];
        

        auto start = std::chrono::high_resolution_clock::now();
        int index_if_found = binary_search(v, 0, v.size() - 1, elem);
        auto end = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
        double duration_double = std::chrono::duration<double>(duration).count();

        times.push_back(duration.count());

        cout << index_if_found << " " <<duration.count() << endl;

        }

        double the_average_times = average(times);

        avg.push_back(the_average_times);

        

    };

    write_times("binarySearch_times.csv", times, file_sizes);

    avg.clear();

    return 0;
}