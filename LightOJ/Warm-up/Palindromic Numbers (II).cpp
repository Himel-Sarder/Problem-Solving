Problem Link : https://lightoj.com/problem/palindromic-numbers-ii
Submission Link : https://lightoj.com/submission/3168340

#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(int n) {
    string numStr = to_string(n);
    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return numStr == reversedStr;
}

int main() {
    int T;
    cin >> T;
    vector<string> results(T);
    
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        if (is_palindromic(n)) {
            results[i] = "Case " + to_string(i + 1) + ": Yes";
        } else {
            results[i] = "Case " + to_string(i + 1) + ": No";
        }
    }
    
    for (const string& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
