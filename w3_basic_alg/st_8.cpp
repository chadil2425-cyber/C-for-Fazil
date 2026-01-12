#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int length =x.length();
    int i;
    string y = " ";
    for (i=length; i>=0; i--)
    {
        y= y+x[i];
    }
    if (x==y)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
    return 0;
}
