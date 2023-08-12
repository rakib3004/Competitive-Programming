#include<bits/stdc++.h>
using namespace std;


void test()
{
    int n;

    cin>>n;

    int a[n]= {0};
    int b[n]= {0};

int lower=0, higher=0;
int state=0;

    int i;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }

    if(n==1){
    cout<<"YES\n";
    return;
}

       for(i=1; i<n; i++)
    {
        if(a[i]>a[i-1]&&higher==0){
                state++;
                higher=state;
                cout<<higher<<" ";
        }
        else if(a[i]<a[i-1]&&lower==0){
                state++;
                lower=state;
                cout<<lower<<" ";
        }

    }

    if(lower>higher){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";

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
