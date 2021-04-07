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



    int i,j;
    int k=0;
    int c=0;
    int t=0;
    int ans=0;

    for(i=0; i<m-nB; i++)
    {

        k=i;
        for(j=0; j<nB; j++)
        {

            if(a[k]==b[0])
            {
                t=k;
            }

            if(a[k]==b[j])
            {
                c++;
                k++;
            }
            else
            {
                i=t;
                c=0;
                break;
            }

            if(c==nB)
            {
                ans++;
                c=0;
                i=t;
                break;
            }

        }



    }

    cout<<ans<<endl;

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
