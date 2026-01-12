#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    getline (cin, x);
    int i;
    int length = x.length(); 
    int count = 0;
    for (i=0; i<length; i++)
    {
        if (x[i]==' ')
        {
            count = count +1;
        }

    }
    cout << count+1 << endl;
    return 0;
}