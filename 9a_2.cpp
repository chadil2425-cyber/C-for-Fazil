#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i;
    int length = x.length();
    int sum =0;
    for (i=0; i<length; i++)
    {
        sum = (sum + x[i]) - '0';
    }
    cout << sum << endl;
    return 0;
}