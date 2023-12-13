#include<bits/stdc++.h>
using namespace std;


void test()
{

int  n, m, a, b;

cin>>n>>m>>a>>b;
int cost1=0,cost2=0,cost3=0;

if(n%m){
    cost1= (n/m)*b + (n%m)*a;
}
else{
    cost1= (n/m)*b;

}
cost2 = n*a;

cost3 = ((n/m)+1)*b;

int updated_cost = min(cost1,cost2);
updated_cost = min(cost3, updated_cost);


cout<<updated_cost<<"\n";

}


int main()
{

    int t;
//    cin>>t;

    t =1;
    while(t--)
    {
        test();
    }


    return 0;

}
