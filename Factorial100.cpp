#include<bits/stdc++.h>
using namespace std;


void test()
{
int n;


cin>>n;

int two=0;
int five =0;
int i;

for(i=1;i<=n;i++){
    if(i%25==0){
        five++;
        five++;

    }
    else if(i%10==0){
        five++;
        two++;

    }
    else if(i%2==0){
        two++;
    }
    else if(i%5==0){
        five++;
    }

}

cout<<min(two,five)<<endl;
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
