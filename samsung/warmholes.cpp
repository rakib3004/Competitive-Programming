#include<iostream>

using namespace std;

int minimum_cost = 100000;
int a[35][5];
int visited[35];
int sx,sy,dx,dy;
int n;
void warmholes(int sx, int sy, int dx, int dy, int cost){

minimum_cost = min(minimum_cost, abs(sx-dx)+abs(sy-dy)+cost);

for(int i=0;i<n;i++){

    if(visited[i]==0){
        visited[i]=1;
        int tempCost;
         tempCost= abs(sx-a[i][0])+abs(sy-a[i][1])+a[i][4]+cost;
         warmholes(a[i][2],a[i][3],dx,dy, tempCost);

         tempCost= abs(sx-a[i][2])+abs(sy-a[i][3])+a[i][4]+cost;
         warmholes(a[i][0],a[i][1],dx,dy, tempCost);
         visited[i]=0;

    }

}
}

void solve(){
minimum_cost = 100000;

cin>>n;

cin>>sx>>sy>>dx>>dy;

for(int i=0;i<n;i++){

    for(int j=0;j<5;j++){
        cin>>a[i][j];
    }
}

int cost = 0;
warmholes(sx,sy,dx,dy,cost);

cout<<minimum_cost<<endl;

}


int main(){

int t;
cin>>t;

while(t--){
solve();
}

}
