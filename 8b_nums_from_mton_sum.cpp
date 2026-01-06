#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    int sum =0;
    for (i=x;  i<=y; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}