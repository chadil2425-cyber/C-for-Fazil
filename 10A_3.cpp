#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        cout << "Number has more than 2 factors" << endl;
    }
    else
    {
        cout << "Number doesn't have more than 2 factors" << endl;
    }
    return 0;
}
