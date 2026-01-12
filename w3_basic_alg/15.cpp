#include <iostream>
using namespace std;
int main ()
{
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    int i;
    int length = x.length();
    for (i=20; i<=50; i++)
    {
        if (i==x || i==y || i==z)
        {
            cout << i;
        }
        else
        {
            cout << "";
        }
    }
    return 0;
}