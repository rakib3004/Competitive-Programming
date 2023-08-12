#include<bits/stdc++.h>
using namespace std;


void test()
{
    int n;

    cin>>n;


    int a[n]= {0};
    int b[n]= {0};


    int i;


    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }


    sort(b,b+n);

     for(i=0; i<n; i++)
    {
        if(a[i]==b[n-1]){
            cout<<a[i]-b[n-2]<<" ";
        }
        else{

       cout<<a[i]-b[n-1]<<" ";


        }

    }
    cout<<"\n";


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
