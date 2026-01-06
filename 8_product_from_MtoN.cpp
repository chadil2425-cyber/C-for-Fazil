#include <iostream>
using namespace std;
int main ()
{
    int x,y;
    cin >> x >> y;
    int i;
    int product = 1;
    for (i=x;  i<=y; i++)
    {
        product = product * i;
    }
    cout << product << endl;
    return 0;
}