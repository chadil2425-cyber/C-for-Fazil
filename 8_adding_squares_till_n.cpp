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
        sum = sum + (i*i);
    }
    cout << sum << endl;
    return 0;
}