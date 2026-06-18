#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
#include <chrono>
using namespace std;

string compressData(string data) {
    string result = "";
    int n = data.length();

    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && data[i] == data[i + 1]) {
            count++;
            i++;
        }
        result += data[i] + to_string(count);
    }

    return result;
}

string decompressData(string data) {
    string result = "";

    for (int i = 0; i < data.length(); i += 2) {
        char ch = data[i];
        int count = data[i + 1] - '0';

        for (int j = 0; j < count; j++) {
            result += ch;
        }
    }

    return result;
}

void compressTask(string input, string &output) {
    output = compressData(input);
}

void decompressTask(string input, string &output) {
    output = decompressData(input);
}

int main() {

    ifstream file("input.txt");
    string data((istreambuf_iterator<char>(file)),
                 istreambuf_iterator<char>());

    string compressed, decompressed;

    auto start = chrono::high_resolution_clock::now();

    thread t1(compressTask, data, ref(compressed));
    t1.join();

    thread t2(decompressTask, compressed, ref(decompressed));
    t2.join();

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> timeTaken = end - start;

    ofstream comp("compressed.txt");
    comp << compressed;

    ofstream decomp("decompressed.txt");
    decomp << decompressed;

    cout << "Compression Completed Successfully!" << endl;
    cout << "Time Taken: " << timeTaken.count() << " seconds" << endl;

    return 0;
}
