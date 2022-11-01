#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout << "How many would you type: " ;
    int T; // test cases
    cin >> T; // input string
    //string S; // string


    for (int i = 0; i < T; i++) {
        string S; // string
        cout << "Enter a word: "
        cin >> S;
        int N = S.size();
        string evenChr = "";
        string oddChr = "";

        for (int k = 0; k < N; k++)
             if (k % 2 == 0) {
                evenChr += S[k];
             } else {
                oddChr += S[k];
             }

        cout << "Characters at the even index: " << evenChr << endl << "Characters at the even index: "<< oddChr << endl << endl;
    }

    return 0;
}
