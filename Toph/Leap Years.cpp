#include "bits/stdc++.h"

using namespace std;
int main()
{
    int R;
    cin >> R;
    if(R%4==0 && R%400!=0)
       {
            cout <<  "YES"  << endl;
       }
    else{
        cout <<  "NO"  << endl;
    }
}
