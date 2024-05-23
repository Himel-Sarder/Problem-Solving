#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, counter1 = 0, counter2 = 0;
    string str;
    cin >> n >> str;
    for(char x : str){
        if(x == 'A'){
            counter1++;
        }
        else if(x == 'D'){
            counter2++;
        }
    }
    if(counter1 > counter2){
        cout << "Anton";
    }
    else if(counter1 < counter2){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}
