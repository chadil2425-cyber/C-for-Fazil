#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int product = 1;
    for (i=1;  i<=x; i++)
    {
        int x1;
        cin >> x1;
        product = product * x1;
    }
    cout << product << endl;
    return 0;
}