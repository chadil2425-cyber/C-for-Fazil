#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double x, y, z;
    cin >> x >> y >> z;
    int i;
    double hyp, opp, adj;
    if (x>y && x>z)
    {
        hyp = x;
    }
    else if (y>x && y>z)
    {
        hyp = y;
    }
    else
    {
        hyp = z;
    }
    if (x<hyp && y<hyp)
    {
        opp = x;
        adj = y;
    }
    else if (x<hyp && z<hyp)
    {
        opp = x;
        adj = z;
    }
    else
    {
        opp = y;
        adj = z;
    }
    if ((x+y) > z && (y+z) > x && (x+z) > y)
    {
        cout << "A Triangle can be formed" << endl;
    }
    else
    {
        cout << "A Triangle cannot be formed" << endl;
    }
    if (pow(opp,2)+pow(adj,2)==pow(hyp,2))
    {
        cout << "And it is a Right-Angled Triangle";
    }

    
    return 0;
}