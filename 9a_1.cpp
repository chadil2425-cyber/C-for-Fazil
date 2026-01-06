#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i;
    int length = x.length();
    for (i=0; i<length; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}