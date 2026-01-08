#include <iostream>
using namespace std;
#include <string>
int main ()
{
    int x;
    cin >> x;
    int i;
    int product = 1;
    for (i=1; i<=x; x=x/10)
    {
       product = product * (x%10);
    }
    cout << product << endl;
    return 0;
} 