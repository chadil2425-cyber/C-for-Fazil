#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int product =1;
    for (i=x; i<=1; i--)
    {
        product = product * i;
    }
    cout << product  << endl;
    return 0;
}