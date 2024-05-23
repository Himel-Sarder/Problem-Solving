#include<bits/stdc++.h>

using namespace std;

int main(){
    int number, x;
    cin >> number >> x;
    for(int i = 0; i < x; i++){
        if(number % 10 == 0){
            number /= 10;
        }else{
            number -= 1;
        }
    }
    cout << number;
}
