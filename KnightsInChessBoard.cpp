#include<bits/stdc++.h>
using namespace std;


void test()
{

    int m,n;

    cin>>m>>n;

    int i,j;
    int q = m*n;

    if(m==1||n==1)
    {
        cout<<q;
    }
    else if(m==2&&n==2)
    {
        cout<<q;
    }

    else if(m==2||n==2)
    {
        int p =q/2;
        if(q%4==0)
        {
            cout<<p;

        }
        else if(q%4==1)
        {
            cout<<p+1;

        }
        else if(q%4==2)
        {
            cout<<p+2;

        }
        else if(q%4==3)
        {
            cout<<p+1;

        }
    }
    else
    {
        cout<<(q/2)+(q%2);
    }
    return;

}
int main()
{


    int t;

    cin>>t;

    int count=1;
    while(t--)
    {
        cout<<"Case "<<count<<": ";
        count++;
        test();
        cout<<endl;
    }


    return 0;

}
