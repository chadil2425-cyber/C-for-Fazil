#include <iostream>
#include <string>
using namespace std;
int main ()
{
    double x, y, z;
    cin >> x >> y >> z;
    int largest;
    if (x>y && x>z)
    {
        largest = x;
    }
    else if (y>x && y>z)
    {
        largest = y;
    }
    else
    {
        largest = z;
    }
    cout << largest << endl;
    return 0;
}