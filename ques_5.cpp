#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i;
    int length =x.length();
    for (i=0; i<length; i++)
    {
       if (x[i]== 'a' || x[i]== 'd' ||x[i]== 'i' ||x[i]== 'l' ||x[i]== 'f' ||x[i]== 'z' ||x[i]== 'b' ||x[i]== 's' ||x[i]== 'r')
       {
        cout << x[i];
       }
    }
    return 0;
}