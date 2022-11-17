#include<bits/stdc++.h>
using namespace std;


void test(int it)
{

double r;
double a,b,c,d;

cin>>a>>c>>b>>d;


double s = (a+b+c+d)/2;

double ans = abs((a+b)/(a-b));

ans = ans * sqrt((s-a)*(s-b)*(s-b-c)*(s-b-d));


cout<<"Case "<<it<<": ";
printf("%lf\n", ans);


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




