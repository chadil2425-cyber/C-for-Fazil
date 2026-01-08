#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    for (i=y; i>=x; i--)
    {
        if (i%2==1)
        {
            cout << i << " ";
        }
    }
    return 0;
}