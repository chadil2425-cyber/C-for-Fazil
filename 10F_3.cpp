#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        if(i==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<i;
            for(int j=0;j<2*i-3;j++)
            {
                cout<<" ";
            }
            cout<<i<<endl;
        }
    }

    for(int i=N-1;i>0;i--)
    {
        if(i==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<i;
            for(int j=0;j<2*i-3;j++)
            {
                cout<<" ";
            }
            cout<<i<<endl;
        }
    }

    return 0;
}
