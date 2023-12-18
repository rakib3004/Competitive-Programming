#include<iostream>
using namespace std;

int a[12][12];
int minimum_cost = 1000000;
int p[12];
int n;
void travel(int l, int r){

if(l==r){
    int cost = 0;
    cost = a[0][p[0]]+ a[p[n-2]][0];

    for(int i=0;i<n-2;i++){
     cost = cost + a[p[i]][p[i+1]];
    }
    minimum_cost = min(minimum_cost, cost);
    return;
}
else{
        for(int i=l;i<=r;i++){
            swap(p[i],p[l]);
            travel(l+1,r);
            swap(p[i],p[l]);
        }

}

}
void solve(){
minimum_cost = 1000000;
cin>>n;

int i,j;

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }
}

for(i=0;i<n;i++){
    p[i] = i+1;
}

travel(0,n-2);
cout<<minimum_cost<<endl;

}

int main(){

int t;
cin>>t;

while(t--){
    solve();
}


}
