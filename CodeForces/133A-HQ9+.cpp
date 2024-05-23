#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for(char c : s){
        if(c == 'H' || c == 'Q' || c == '9'){
            count++;
        }else{
            continue;
        }
    }
    if(count >= 1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
