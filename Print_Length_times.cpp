#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int leng = x.length();
    int i;
    for (i=1;  i<= leng; i++)
    {
        cout << x[0] << endl;
    }
    return 0;
}