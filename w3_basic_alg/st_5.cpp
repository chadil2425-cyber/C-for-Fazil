#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string x;
    cin >> x;
    int i;
    int length = x.length(); 
    int count = 0;
    for (i=0; i<length; i++)
    {
        if (x[i]=='a' || x[i]== 'e' || x[i]== 'i'|| x[i]== 'o'|| x[i]== 'u')
        {
            count = count +1;
        }

    }
    cout << count << endl;
    return 0;
}