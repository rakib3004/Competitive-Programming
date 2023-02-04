#include<bits/stdc++.h>
using namespace std;


void test()
{

int n;

cin>>n;

long long int result = 1;


int i;

for(i=1;i<=n;i++){
    result*=i;
}

cout<<result<<endl;


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
