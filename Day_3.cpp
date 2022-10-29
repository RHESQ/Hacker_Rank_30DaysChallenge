#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void numberDescribe (int N) {
     if ((N % 2) == 0) {
        if (N >= 2 && N <= 5) {
            printf("Not Weird\n");
        } else if (N >= 6 && N <= 20){
            printf("Weird\n");
        } else  if (N > 20){
            printf("Not Weird\n");
        }
    } else {
        printf("Weird\n");
    }
}

int main()
{
    cout << "Enter a number: ";
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    numberDescribe(N);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
