#include<bits/stdc++.h>
using namespace std;


void test()
{

    int n,x;
    int i;
    cin>>n;


int a[101]={0};



for(i=0;i<n;i++){
    cin>>x;
    a[x]++;
}

for(i=1;i<101;i++){
   if(a[i]%2==1){
    cout<<"NO\n";
    return;
   }
}

cout<<"YES\n";
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
