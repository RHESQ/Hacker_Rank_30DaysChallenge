#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string, long long> phoneBook;
    map <string, long long>::iterator ipb;

    int N;
    string name, searchName;
    long long phoneNumber;

    cout << "enter the number contacts you would like to store: ";
    cin >> N;

    while (N != 0) {
        cin >> name >> phoneNumber;
        N--;
        phoneBook.insert (pair <string, long int>(name, phoneNumber));
    } cout << endl;

    cout << "type the name you are looking for:" << endl;

    for (int i = 0; i < phoneBook.size(); i++) {
        cin >> searchName;
        ipb = phoneBook.find(searchName);

        if (ipb == phoneBook.end()){
            phoneBook[searchName] = 0;
            cout << "Not found" << endl;
        } else {
                cout << ipb -> first << "=" << ipb -> second << endl;

        }
    }
    return 0;
}
