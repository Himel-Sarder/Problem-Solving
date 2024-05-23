Problem Link : https://lightoj.com/problem/redirect-url
Submission Link : https://lightoj.com/submission/3168308

#include <bits/stdc++.h>
using namespace std;

string redirect_to_https(const string& url) {
    if (url.substr(0, 7) == "http://") {
        return "https://" + url.substr(7);
    }
    return url;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    vector<string> results;

    for (int i = 1; i <= T; ++i) {
        string url;
        getline(cin, url);
        string redirected_url = redirect_to_https(url);
        results.push_back("Case " + to_string(i) + ": " + redirected_url);
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
