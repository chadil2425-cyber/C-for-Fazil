#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int leng = x.length();
    int i;
    for (i=0;  i<leng; i++)
    {
        cout << x[i] << endl;
    }
    return 0;
}