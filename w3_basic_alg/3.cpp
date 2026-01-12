#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cin >> x >> y;
    int i;
    if (x==30 || y==30 || x+y==30)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}