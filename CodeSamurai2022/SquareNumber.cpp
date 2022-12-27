#include<bits/stdc++.h>
using namespace std;


void test(int it)
{

long long int a,b;

cin>>a;

b=sqrt(a);

long long int c= b*b;

if(a==c){
    cout<<"YES"<<endl;
}
else{

cout<<"NO"<<endl;

}

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
