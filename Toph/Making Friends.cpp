#include "bits/stdc++.h"

int main()
{
    using namespace std;
	long long int N, counter = 0;
	cin >> N;

	for(int i = 1; i < N; i++)
		{
			if(N % i == 0)
				counter++;
		}
	cout << counter << endl;
}
