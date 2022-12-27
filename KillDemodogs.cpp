#include<bits/stdc++.h>
using namespace std;


void test()
{
long long int n;

long long int eqn = 1000000007;


cin>>n;



long long int result = (((n*(n+1)*(n+1))/2 - n)*2022)%eqn;


cout<<result<<"\n";

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
