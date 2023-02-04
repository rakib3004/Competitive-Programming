#include<bits/stdc++.h>
using namespace std;


void test()
{
 int n;

 cin>>n;


 int a[n];


 int i;

 for(i=0;i<n;i++){

    cin>>a[i];

 }

 int x=a[0];
 int y= a[1];
 int z = a[2];


 if(a[0]==a[1]&&a[1]==a[2]){


    for(i=0;i<n;i++){
        if(a[i]!=x){
            cout<<i+1<<endl;
            return ;


    }

    }

 }

if(x==y&&x!=z){
     cout<<3<<endl;
            return ;
}
if(x==z&&x!=y){
     cout<<2<<endl;
            return ;
}
if(z==y&&x!=z){
     cout<<1<<endl;
            return ;
}



    return ;

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
