#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        int max_freq = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            max_freq = max(max_freq, ++freq[a[i]]);
        }
        cout << n - max_freq << endl;
    }
    return 0;
}
// Himel Sarder
