#include<bits/stdc++.h>
using namespace std;


void test()
{

   int n;

   cin>>n;


   int i;

   double sum=0;
   for(i=1;i<=n;i++){

    sum = sum+log10(i);

   }

   cout<<floor(sum)<<endl;
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
