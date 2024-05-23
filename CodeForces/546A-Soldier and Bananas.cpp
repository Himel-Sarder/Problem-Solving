#include <bits/stdc++.h>

using namespace std;

int main(){
    int FirstPrice, HasDoller, Amount, Calculator = 0;
    cin >> FirstPrice >> HasDoller >> Amount; 

    for(int i = 1; i <= Amount; i++){
        Calculator += i * FirstPrice; // 9 = 9 + 3*3
    }
    int Decision = Calculator - HasDoller;
    if(Decision > 0){
        cout << Decision << endl;
    }else{
        cout << "0" << endl;
    }
    
}
