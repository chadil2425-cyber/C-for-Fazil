#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    int y;
    cin >> x >> y;
    int i;
    int length = x.length();
    for (i=0; i<length; i++)
    {
        if (i==y)
        {
            cout << "";
        }
        else
        {
            cout << x[i];
        }
    }
    return 0;
}