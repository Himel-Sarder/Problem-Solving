#include "bits/stdc++.h"

int main()
{
    using namespace std;
    int n ;
    cin >> n ;
    int a = n/10;
    cout << "[";
    for( int i = 1 ; i <=a ; i++ )
    {
        cout << "+";
    }
    for( int i = 1 ; i<=(10-a) ; i++ )
    {
        cout << ".";
    }
    cout <<"]"<<" "<<n<<"%"<<endl;
    return 0;
}
