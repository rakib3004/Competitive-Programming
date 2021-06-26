#include<bits/stdc++.h>
using namespace std;
int n[1000];

int var=0;


void test()
{
    var++;

    string a,b;

    cin>>a>>b;


    int n=a.size();
    int m= b.size();

int counter=0;

    int i,j;

    for(i=0;i<=n-m;i++){


        for(j=0;j<m;j++){

            if(a[i+j]!=b[j]){
                break;
            }


        }
        if(j==m){
            counter++;
            //i=i+j-1;
            j=0;
        }

    }
cout<<"Case "<<var<<": "<<counter<<endl;
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
