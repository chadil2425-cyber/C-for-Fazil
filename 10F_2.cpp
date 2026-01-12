#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int num=1;

    for(int i=1;i<=N;i++)
    {
        if(i==1 || i==N)
        {
            for(int j=0;j<N-i;j++)
            {
                cout<<" ";
            }
            for(int j=0;j<i;j++)
            {
                cout<<"* ";
            }
            for(int j=0;j<N-i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=0;j<N-i;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=0;j<num;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            for(int j=0;j<N-i;j++)
            {
                cout<<" ";
            }
            cout<<endl;
            num=num+2;
        }
    }

    return 0;
}
