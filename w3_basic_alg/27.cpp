#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x = "a";
    string y;
    cin >> y;
    int i;
    int length = x.length();
    for (i=0; i<length; i++)
    {
        if (x[i]==x[i+1]==x)
        {
            cout << "1" << endl;
        }
        else{
            cout << "0"<< end;
        }
    }
   
    return 0;
}