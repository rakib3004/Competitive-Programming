#include<iostream>

using namespace std;

int n;

int gate_position[3];
int fisher_per_gate[3];
int visited[10];

int minimum_distance = 10000000;

void fisherman(int l, int r){


if(l==r){

int distance=0;

int i,j,k;

for(i=0;i<fisher_per_gate[0];i++){
    distance = distance+ abs(visited[i]-gate_position[0]);
}

for(j=0;j<fisher_per_gate[1];j++){
    distance = distance+ abs(visited[i]-gate_position[1]);
    i++;
}

for(k=0;k<fisher_per_gate[2];k++){
    distance = distance+ abs(visited[i]-gate_position[2]);
    i++;
}

distance = distance +i;
minimum_distance = min(minimum_distance,distance);

}
else{
for(int i =l;i<=r;i++){
    swap(visited[i],visited[l]);
    fisherman(l+1,r);
        swap(visited[i],visited[l]);

}

}
}


void solve(){

    cin>>n;

    cin>>gate_position[0]>>gate_position[1]>>gate_position[2];
    cin>>fisher_per_gate[0]>>fisher_per_gate[1]>>fisher_per_gate[2];

for(int i=0;i<n;i++){
    visited[i]= i+1;
}
fisherman(0,n-1);

cout<<minimum_distance<<endl;

}


int main(){

solve();
return 0;
}
