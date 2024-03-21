#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_to_file(string filename, string *arr, int sample_size) {
    ofstream file(filename);
    string val;

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

void write_to_file(string filename, char *arr, int sample_size) {
    ofstream file(filename);
    string val;

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

void write_to_file(string filename, int *arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++) {
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

void read_file(string filename){
    fstream file(filename);

    if (file.is_open()) {;
        string line;
        while (getline(file, line)) {
            cout << line << endl; 
        }
    } else {
        file.close();
    }
}


int main() {
    const int sample_size = 10;
    int array_int[sample_size] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[sample_size] = {"This", "is", "a", "sentence.",
                                    "This", "is", "another", "sentence.",
                                    "The", "end."};

    char array_char[sample_size] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};

    string int_file = "array_int.csv";
    string string_file = "array_str.csv";
    string char_file = "array_char.csv";
    write_to_file(int_file, array_int, sample_size);
    write_to_file(string_file, array_str, sample_size);
    write_to_file(char_file, array_char, sample_size);
    read_file(int_file);
    read_file(string_file);
    read_file(char_file);

    return 0;

}
