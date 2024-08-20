#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MOD 1e9+7
 
ll pw(ll a, ll b) {
    if (b == 0) return 1;
    ll t = pw(a, b / 2);
    if (b % 2 == 0) return t * t % (ll)MOD;
    else return t * t % (ll)MOD * a % (ll)MOD;
}
 
void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n / 2; i++)
        cout << i << " ";
    for (int i = n; i > n / 2; i--)
        cout << i << " ";
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
