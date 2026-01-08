#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i;
    int length = x.length(); 
    for (i=length; i>=0; i--)
    {
            cout << x[i] << endl;

    }
    return 0;
}