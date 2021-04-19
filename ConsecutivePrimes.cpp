#include<bits/stdc++.h>
using namespace std;



int a[10000];
int b[10000];

int isPrime(int n){
   // cout<<"Status OK!!!"<<endl;


int k=0;


    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            a[j]=1;
        }

    }
    for(int i=2;i<=n;i++){
   // cout<<"Status Roooks  "<<i<<" !!!"<<endl;

        if(a[i]==0){
                   // cout<<"S324345534554!!!"<<endl;

    b[k]=i;
    k++;
  //  cout<<k<<" ---> "<<b[k]<<endl;
        }

    }

    return k;
    }

void test(int it)
{
    int n;


    cin>>n;

    int rtN = (int)sqrt(n)*3;

        cout<<"Case #"<<it<<": ";


     int k = isPrime(rtN);
     int i;
int surprise=0;
     for(i=0;i<k;i++){

        if(b[i]*b[i+1]<=n){
            surprise =b[i]*b[i+1];
        }
        else{
            cout<<surprise<<endl;
            return;
        }

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
