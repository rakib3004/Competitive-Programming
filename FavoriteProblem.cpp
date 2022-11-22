#include<bits/stdc++.h>
using namespace std;


void test()
{
int n;

cin>>n;


string s;

cin>>s;


int i;

int maxChar=-1;


for(i=0;i<n;i++){

maxChar=max(maxChar,s[i]-'a'+1);
}
cout<<maxChar<<endl;

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
