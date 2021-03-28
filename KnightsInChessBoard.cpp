#include<bits/stdc++.h>
using namespace std;


void test(){

int m,n;

cin>>m>>n;

int i,j;
int q = m*n;

if(m==1||n==1){
    cout<<q;
}
else {
    cout<<(q/2)+(q%2);
}
return;

}
int main(){


int t;

cin>>t;

int count=1;
while(t--){
cout<<"Case "<<count<<": ";
count++;
    test();
    cout<<endl;
}


return 0;

}
