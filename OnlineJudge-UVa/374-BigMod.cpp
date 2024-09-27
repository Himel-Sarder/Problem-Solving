#include<bits/stdc++.h>
using namespace std;
 
int Bigmod(int base , int power , int mod)
{
    if(power == 0) return 1;
    else if(power % 2 == 1)
    {
        int a = base%mod;
        int b = (Bigmod(base , power-1 , mod))%mod;
        return (a*b)%mod;
    }
    else if(power % 2 == 0)
    {
        int a = (Bigmod(base , power/2 , mod))%mod;
        return (a*a)%mod;
    }
}
 
int main ()
{
    int base , power , mod;
    while(cin>>base>>power>>mod)
    {
      cout<< Bigmod(base,power,mod) <<endl;
      cout<<endl;
    }
    return 0;
}
