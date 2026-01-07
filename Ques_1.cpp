#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int j;
    for (i=1; i<=x; i++)
    {
        for (j=x; j<=i+4; j--)
        {
            cout << j << " ";
        }
        cout << "" << endl;
    }
    return 0;
}