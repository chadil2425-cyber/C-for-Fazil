#include <iostream>
using namespace std;

int main()
{
    int a = 11, b = 21, c = 31;

    if(a + 20 == b || a + 20 == c || b + 20 == a || b + 20 == c || c + 20 == a || c + 20 == b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
