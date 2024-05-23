#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int H,M;
    cin >> H >> M;
    double Angle = abs((60 * H) - (11 * M))/2.0;

    Angle = min(Angle, 360 - Angle);

    cout << fixed << setprecision(7) << Angle << endl;
}
