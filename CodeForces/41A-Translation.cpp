#include<bits/stdc++.h>

using namespace std;

int main(){
    string tran1;
    string tran2;
    cin >> tran1 >> tran2;
    reverse(tran1.begin(), tran1.end());
    if(tran1 == tran2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}
