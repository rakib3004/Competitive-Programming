#include<bits/stdc++.h>
using namespace std;


void test()
{

 int n,m;

 int a[n]={0};

 int b[m]={0};


 int i,j;

 for(i=0;i<n;i++){
    cin>>a[i];
 }

 for(j=0;j<m;j++){
    cin>>b[j];
 }

 int sum=0;

  sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());

    for(j=0;j<n;j++){
        sum=sum+b[j];
    }
int x=n-m;
 for(j=0;j<x;j++){
        sum=sum+a[j];
    }

cout<<sum<<"\n";

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
