 #include<bits/stdc++.h>

 using namespace std;

 int main(){
    int n, count = 0;
    cin >> n; //3
    string s; 
    cin >> s; //RRG
    for(int i = 0; i < n; i++){
        if(s[i] == s[i+1]){ //R == R
            count++; //1
        }else{
            continue;
        }
    }
    if(count > 0){
        cout << count << endl;
    }else{
        cout << "0";
    }
 }




