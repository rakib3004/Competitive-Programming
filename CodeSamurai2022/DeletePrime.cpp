#include<bits/stdc++.h>
using namespace std;




vector<bool>a;
bool isPrime(int n){

    for(int i=1;i<=n;i++){

        a[i]=true;

    }

    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            a[j]=false;
        }
    }
    return a[n];
    }




void index(int t, int n , int k){
int flagCount=0;
int i;

int v[n+1];

int x[n+1];

dArray :


int j=0;

    for(i=1;i<=n;i++){


if(v[i]!=-1){

continue;

}
else{

    x[j++]=v[i];

}


    }





for(i=1;i<=n;i++){


    v[i]=i;
    x[i]=i;
}


for(i=2;i<=n;i++){

if(isPrime(x[i])==true){

    flagCount++;



    if(flagCount==k){

        cout<<v[x[i]]<<endl;
        return;
    }

    v[x[i]]=-1;


}

}


if(flagCount==n){


    return;
}
goto dArray;


return;

}


void value(int t, int n , int k){





return;

}



void test()
{


int t,n,k;


    cin>>t>>n>>k;

    if(t==1){
index(t,n,k);
    }else{
value(t,n,k);
    }


    return;

}
int main()
{


    int i;

    cin>>i;

    while(i--)
    {

        test();

    }


    return 0;

}
