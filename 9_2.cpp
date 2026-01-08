#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    int sum =0;
    for (i=1; i<=x; i++)
    {
        sum = sum + pow(i,y);
    }
    cout << sum  << endl;
    return 0;
}