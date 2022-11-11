#include <bits/stdc++.h>

using namespace std;

class binaryConversion {
public:
    vector <int> binary;
    int currCount = 0;
    int maximum = 0;

    void decToBin(int decVal) {
        while (decVal > 0) {
            binary.push_back(decVal % 2);
            decVal /= 2;
        }
    }

    void get_Binary() {
        for (auto a = binary.rbegin(); a != binary.rend(); a++) {
            cout << *a << " ";
        } cout << endl;
    }

     void get_Instance() {
        for (auto sN = binary.rbegin(); sN != binary.rend(); sN++) {
            if (*sN == 0) {
                currCount = 0;
            } else {
                currCount++;
            }
            maximum = max(maximum, currCount);
        }
        cout << maximum << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    binaryConversion dec_to_bin;
    dec_to_bin.decToBin(num);

    cout << "Binary number: ";
    dec_to_bin.get_Binary();

    cout << "Maximum number of consecutive 1s: ";
    dec_to_bin.get_Instance();

    return 0;
}
