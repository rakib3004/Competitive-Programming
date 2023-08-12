#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll a[10000000];
ll b[10000000];

ll isPrime(ll n){
   // cout<<"Status OK!!!"<<endl;


ll k=0;


    for(ll i=2;i*i<=n;i++){
        for(ll j=i*i;j<=n;j+=i){
            a[j]=1;
        }

    }
    for(ll i=2;i<=n;i++){
   // cout<<"Status Roooks  "<<i<<" !!!"<<endl;

        if(a[i]==0){
                   // cout<<"S324345534554!!!"<<endl;

    b[k]=i;
    k++;
  //  cout<<k<<" ---> "<<b[k]<<endl;
        }

    }
ll cd = k;
k=0;
    return cd;
    }

void test(int it)
{
    ll n;


    cin>>n;

    ll rtN = (ll)sqrt(n)*3;

        cout<<"Case #"<<it<<": ";


     ll k = isPrime(rtN);
     ll i;
ll surprise=0;
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
