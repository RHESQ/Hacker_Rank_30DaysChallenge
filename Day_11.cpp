#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

class hourGlass {
public:
    vector<vector<int>> A;
    int max_sum = -63;
    int sum = 0;

    void sumHourGlass(vector<vector<int>> arr) {
        A = arr;
        for (int i = 0;  i < A.size() - 2; i++) {
            for (int j = 0; j < A.size() - 2; j++){
                sum = A[i][j] + A[i][j + 1] + A[i][j + 2] + A[i + 1][j + 1] +
                A[i + 2][j] + A[i + 2][j + 1] + A[i + 2][j + 2];

                max_sum = max(max_sum, sum);
            }
        }
        cout << max_sum << endl;
    }
};

int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    hourGlass sum_hour_glass;
    sum_hour_glass.sumHourGlass(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
