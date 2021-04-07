#include<bits/stdc++.h>
using namespace std;
int n[1000];

void Compute_Prefix_Function(string p)
{

    n[0]=1;

    int m=p.size();

    int k=0;
    int i;

    cout<<"i k n[k]"<<endl;

    for(i=0; i<m; i++)
    {

        do
        {
            k=n[k];
        }
        while (k>0&&p[k+1]!=p[i]);

        if(p[k+1]==p[i])
        {
            k++;
        }
        n[i]=k;

        cout<<i<<" "<<k<<" "<<n[i]<<endl;

    }

    return ;

}


void test()
{

    string a,b;

    cin>>a>>b;


    int m=a.size();
    int nB= b.size();

    Compute_Prefix_Function(b);



    int i;
    int k=0;

    for(i=1; i<nB; i++)

    {




    }

    return;

}
int main()
{


    int t;

    cin>>t;

    while(t--)
    {

        test();

    }


    return 0;

}
