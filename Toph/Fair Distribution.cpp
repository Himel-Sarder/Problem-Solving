#include "bits/stdc++.h"

int main()
{
    using namespace std;
	int m,n,counter=0;
	cin >> m >> n;
	while(n % m!= 0)
		{
			n = n + 1;
			counter++;
		}
	cout << counter << endl;
}