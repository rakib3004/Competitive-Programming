#include<bits/stdc++.h>
using namespace std;


void test()
{

int n;
cin>>n;

 char a[n][n];


int i,j;



int b[2]={0},c[2]={0};

for(i=0;i<n;i++){


  for(j=0;j<n;j++){


cin>>a[i][j];

  }
  getchar();
}

int k=0;

for(i=0;i<n;i++){


  for(j=0;j<n;j++){
if(a[i][j]=='*'){

    b[k]=i;
    c[k]=j;
    k=1;
}

  }

}


int p[2],q[2];
int r1=0,r2=0;
int r;
if(c[0]==c[1]){

r=b[1]-b[0];
p[0]=b[0];
p[1]=b[1];

q[0]=c[0]+r;
q[1]=c[1]+r;

if(q[0]<0||q[0]>=n||q[1]<0||q[1]>=n){
  q[0]=c[0]-r;
q[1]=c[1]-r;
}

a[p[0]][q[0]]='*';
a[p[1]][q[1]]='*';


}
else if(b[0]==b[1]){
r=c[1]-c[0];

p[0]=c[0];
p[1]=c[1];

q[0]=b[0]+r;
q[1]=b[1]+r;


if(q[0]<0||q[0]>=n||q[1]<0||q[1]>=n){
  q[0]=b[0]-r;
q[1]=b[1]-r;
}

a[p[0]][q[0]]='*';
a[p[1]][q[1]]='*';

}

else{

    p[0]=b[0];
p[1]=b[1];

q[0]=c[1];
q[1]=c[0];

k=0;


for(i=0;i<n;i++){


  for(j=0;j<n;j++){
if(i==p[k]&&j==q[k]){

   a[i][j]='*';

k=1;
}


  }

}


}




for(i=0;i<n;i++){


  for(j=0;j<n;j++){


cout<<a[i][j];

  }
  cout<<endl;
}




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
