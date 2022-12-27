#include<bits/stdc++.h>
using namespace std;


void test(int it)
{


int a[3]={0};


int i;



    cin>>a[0]>>a[1]>>a[2];


sort(a,a+3);



cout<<"Case "<<it<<": "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;







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
