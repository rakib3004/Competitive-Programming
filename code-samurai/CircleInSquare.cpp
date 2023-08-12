#include<bits/stdc++.h>
using namespace std;


void test(int it)
{

double r;

cin>>r;

double d=2*r;

double pi = 2 * acos(0.0);

double ans = d*d - (pi*r*r);


cout<<"Case "<<it<<": ";
printf("%.2f\n", ans);


 return;


}


int main()
{



    int t;

    cin>>t;
int it =0;
    while(t--)
    {
it++;
        test(it);
    }

    return 0;

}




