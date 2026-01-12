#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int length =x.length();
    int i;
    for (i=length; i>=0; i--)
    {
        cout << x[i];
    }
    return 0;
}
