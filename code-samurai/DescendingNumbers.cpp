#include<bits/stdc++.h>
using namespace std;


void test()
{
int i=1000;

for(;i>=1;i--){

    cout<<i;

    if((i-1)%5==0){
        cout<<endl;
    }
    else{
        cout<<" ";
    }
}

}


int main()
{


    int t=1;


    while(t--)
    {
        test();
    }


    return 0;

}
