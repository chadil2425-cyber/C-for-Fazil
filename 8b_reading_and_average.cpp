#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int sum = 0;
    for (i=1;  i<=x; i++)
    {
        int x1;
        cin >> x1;
        sum = sum + x1;
    }
    cout  << sum/x << endl;
    return 0;
}