#include<bits/stdc++.h>
using namespace std;


void test()
{

 long long int n,m;

 cin>>n>>m;


 long long int a[n]={0};

 long long int b[m]={0};


 long long int i,j;

 for(i=0;i<n;i++){
    cin>>a[i];
 }

 for(j=0;j<m;j++){
    cin>>b[j];
 }

 long long int sum=0;

  sort(a, a + n, greater<long long int>());
    sort(b, b + m, greater<long long int>());

    for(j=0;j<n;j++){
        sum=sum+b[j];
    }


long long int x=n-m;
if(x>0){
    for(j=0;j<x;j++){
        sum=sum+a[j];
    }
}


cout<<sum<<"\n";

}


 int main()
{

 long long int t;
    cin>>t;


    while(t--)
    {
        test();
    }


    return 0;

}
