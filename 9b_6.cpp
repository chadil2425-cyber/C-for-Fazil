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
        if (x[i]=='a' || x[i]== 'z')
        {
            cout << x[i] << endl;
        }

    }
    return 0;
}