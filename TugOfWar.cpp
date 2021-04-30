#include<bits/stdc++.h>
using namespace std;


void test()
{

int n;
cin>>n;


int a[n];

int i;

for(i=0;i<n;i++){

    cin>>a[i];
}

sort(a,a+n);

int teamA=0, teamB=0;

for(i=0;i<n;i++){

    if(i%2==0){
        teamA=teamA+a[i];
    }
    else{
        teamB=teamB+a[i];
    }
}
int maxT = max(teamA,teamB);
int minT = min(teamA,teamB);


cout<<minT<<" "<<maxT<<endl;
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
