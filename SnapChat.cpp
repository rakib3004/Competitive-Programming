#include<bits/stdc++.h>
using namespace std;


void test()
{

    int n;
    int i;

    cin>>n;


int a[n]={0};
int b[n]={0};


for(i=0;i<n;i++){
    cin>>a[i];
}

for(i=0;i<n;i++){
    cin>>b[i];
}

int maxCount=0;

int flagCount=0;
for(i=0;i<n;i++){

    if(a[i]>0&&b[i]>0){
        flagCount++;
    }else{
     flagCount=0;
    }
maxCount= max(maxCount,flagCount);
}




cout<<maxCount<<"\n";

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
