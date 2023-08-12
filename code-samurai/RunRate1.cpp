#include<bits/stdc++.h>
using namespace std;


void test()
{

double r1,r2,b1;
double over=6;
double totalBall=300;
cin>>r1>>r2>>b1;


double a=  (r2/(totalBall-b1))*over;
double b =  ((r1-r2+1)/b1)*over;

printf("%.2f %.2f",a,b);
cout<<endl;
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
