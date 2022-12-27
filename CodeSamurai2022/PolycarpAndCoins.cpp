#include<bits/stdc++.h>
using namespace std;


void test()
{
int n;

cin>>n;

int a=n/3;

if(n%3==0){
    cout<<a<<" "<<a<<endl;
}
else if(n%3==1){
    cout<<a+1<<" "<<a<<endl;
}
else{
    cout<<a<<" "<<a+1<<endl;
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
