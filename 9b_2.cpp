#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x, y, z;
    cin >> x >> y >> z;
    int i;
    int sum = 0;
    for (i=y; i<=z; i++)
    {
       if (i%x==0)
       {
        sum = sum + i;
       }
    }
    cout << sum << endl;
    return 0;
}