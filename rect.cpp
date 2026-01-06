#include <iostream>
using namespace std;
#include <string>
int main ()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    int i;
    string z = "*";
    for (i=1;  i<=x; i++)
    {
       cout << z*y << endl;
    }
    return 0;
}