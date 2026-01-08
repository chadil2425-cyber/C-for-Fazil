#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int x;
    cin >> x;
    int i;
    int count = 0;
    for (i=1; i<=x; i++)
    {
       if (i%6==0 && i%8==0)
       {
        count = count +1;
       }
    }
    cout << count << endl;
    return 0;
}