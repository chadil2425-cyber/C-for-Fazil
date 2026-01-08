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
        if (x[i]=='a' || x[i]== 'e' || x[i]== 'i'|| x[i]== 'o'|| x[i]== 'u')
        {
            cout << x[i] << endl;
        }

    }
    return 0;
}