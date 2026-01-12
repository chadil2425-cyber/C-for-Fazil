#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if((x >= 10 && x <= 20) || (y >= 10 && y <= 20))
    {
        cout << 18 << endl;
    }
    else
    {
        cout << x + y << endl;
    }

    return 0;
}
