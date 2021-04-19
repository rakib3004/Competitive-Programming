#include<bits/stdc++.h>
using namespace std;


void test(int it)
{
int n;
int q[100]={0};

cin>>n;



int a[n];
int d[n];
    map<int, int> rrr;

int i=0;

cin>>a[0];
for(i=1;i<n;i++){



    cin>>a[i];
    d[i-1] = a[i]-a[i-1];
      cout<<rrr.insert({d[i-1],max(0,rrr.at(d[i-1])+1)})<<endl;


}
for(i=0;i<n-1;i++){


}

sort(q,q+12000);



cout<<"Case #"<<it<<": ";
cout<<q[0]+1<<endl;


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
cout<<endl;
    }


    return 0;

}
