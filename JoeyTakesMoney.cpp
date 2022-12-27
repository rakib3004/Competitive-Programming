#include<bits/stdc++.h>
using namespace std;


void test()
{
long long int sum=0;

long long int i;


long long int j;


long long int n;

cin>>n;



long long int x,y;

long long int a[n];



for(i=0;i<n;i++){

        cin>>a[i];

}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        x= a[i]*a[j];
        y=1;
        a[i]=x;
        a[j]=y;
    }
}



for(i=0;i<n;i++){


 sum=sum+a[i];


}

cout<<2022*sum<<"\n";

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
