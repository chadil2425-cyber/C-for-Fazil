#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int j;
    for (i=1;  i<=x; i++)
    {
        for (j=1; j<=x; j++)
        {
            cout << i;
        }
        cout << "" << endl;
    }
    return 0;
}