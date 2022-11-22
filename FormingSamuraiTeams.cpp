#include<bits/stdc++.h>
using namespace std;


void test()
{
int n;


cin>>n;


string names[n];


int i;

int startAscii=97;
int finishAscii=122;

pair<char,int> teams[26];
for(i=startAscii;i<=finishAscii;i++){
        teams[i-startAscii].first=char(i);

        teams[i-startAscii].second=0;

}

bool impossible=true;

for(i=0;i<n;i++){
    cin>>names[i];
    teams[names[i][0]].second++;

    cout<<teams[names[i][0]].first;

}

for(i=0;i<n;i++){

if(teams[i].second>=3){
impossible=false;
    cout<<teams[i].first;

}
}


if(impossible){
    cout<<"impossible";
}
cout<<endl;


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
