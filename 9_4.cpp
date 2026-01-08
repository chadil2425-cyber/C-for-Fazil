#include <iostream>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int j;
    for (i=x; i>=1; i--)
    {
        cout << "* ";;
    }
    cout << endl;
    for (i=x-1; i>=1; i--)
    {
        for (j=x-1; j>=1; j--)
        {
            cout << "+ ";
        }
        cout << endl;
    }
    return 0;
    return 0;
}