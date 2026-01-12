#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

   cin >> x >> y >> z;

    if(y > x && z > y)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
