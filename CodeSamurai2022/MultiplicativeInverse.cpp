#include<bits/stdc++.h>
using namespace std;


int z;

int Function(int x, int  p,int z){

z++;
if (x <=1) {
       return z/2;
}

 else{
 cout<<(floor(p/x)*(Function(p%x,p,z)%p))<<" : ";


     return floor(p/x)*(Function(p%x,p,z)%p);


 }


}


void test()
{
int p;

cin>>p;

int i=0;

int sum=0;

for(i=1;i<p;i++){
    z=0;

    cout<<endl<<"-->";
   sum = sum+ Function(i,p,z);
//cout<<Function(i,p,z)<<"--->";
}
cout<<endl;

double dSum = (double)sum/(double)(p-1);

cout<<dSum<<endl;


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
