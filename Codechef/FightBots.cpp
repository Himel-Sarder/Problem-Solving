#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    ll ax = 0, ay = 0;

    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'U') {
            ay++;
        } else if (s[i - 1] == 'D') {
            ay--;
        } else if (s[i - 1] == 'L') {
            ax--;
        } else if (s[i - 1] == 'R') {
            ax++;
        }

        ll dis = abs(x - ax) + abs(y - ay);
        if (dis <= i && dis % 2 == i % 2) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
