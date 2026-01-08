#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    for (i=y; i>=x; i--)
    {
        cout << i << endl;
    }
    return 0;
}