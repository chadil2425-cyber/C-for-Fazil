#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    int y;
    cin >> x >> y;
    int i;
    int length = x.length();
    if (x.strarts_with("C#"))
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}