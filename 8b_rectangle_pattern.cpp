#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    int j;
    for (i=1;  i<=x; i++)
    {
        for (j=1; j<=y; j++)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }
    return 0;
}