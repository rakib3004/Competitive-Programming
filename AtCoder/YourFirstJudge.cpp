#include<bits/stdc++.h>
using namespace std;


void test()
{


    string a;
    string b;

    a="Hello,World!";

    cin>>b;


    int k = b.size();
    int d= a.size();

    if(k!=d){

    cout<<"WA"<<endl;

            return;

    }

    int i;


    for(i=0; i<k; i++)
    {
        if(a[i]!=b[i])
        {

            cout<<"WA"<<endl;

            return;
        }
    }

    cout<<"AC"<<endl;

    return;

}
int main()
{


    int t;

    t=1;
    while(t--)
    {

        test();

    }


    return 0;

}
