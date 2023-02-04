#include<bits/stdc++.h>
using namespace std;


void test()
{
int a[3];



cin>>a[0]>>a[1]>>a[2];

sort(a,a+3);



if(a[2]==(a[0]+a[1])){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

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
