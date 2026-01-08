#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    for (i=1; i<=x; i++)
    {
       if (i%y==0)
       {
        cout << i << endl;
       }
    }
    return 0;
}