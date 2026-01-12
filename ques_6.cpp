#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x, y;
    cin >> x >> y;
    int i;
    int j;
    int length;
    int length1 =x.length();
    int length2 =y.length();
    if (length1 > length2)
    {
        length = length1;
    }
    else
    {
        length = length2;
    }
    for (i=0; i<length; i++)
    {
       for (j=0;j<length;j++)
       {
        if (x[i]!=y[j])
        {
            cout << y[i];
        }
       }
    }
    return 0;
}