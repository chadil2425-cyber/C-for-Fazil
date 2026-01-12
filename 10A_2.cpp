#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int X, N;
    cin >> X;
    cin >> N;
    double sum = 0;
    int num = 1;
    for (int i = 1; i <= N; i++)
    {
        double X1 = num * pow(X, 2 * i - 1);
        sum =sum + X1;
        num = -num;
    }
    cout << sum << endl;
    return 0;
}
