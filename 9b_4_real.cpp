#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    for (i=1; i<=x; i++)
    {
       if (i%2==0 && i%3==0)
       {
        cout << i << endl;
       }
    }
    return 0;
}