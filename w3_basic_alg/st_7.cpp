#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i, j;
    int length = x.length(); 
    for (i=0; i<length; i++)
    {
        for (j=0; j<length; j++)
        {
            if (x[i]!=x[j])
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }
    }
    return 0;
}