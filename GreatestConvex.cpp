#include<bits/stdc++.h>
using namespace std;


void test()
{

long long int k;

cin>>k;

bool notFound=true;

long long int x,y, yFact;
y=1;
yFact=1;

while(((y+2)*yFact)<10000000000){


cout<<(y+2)*yFact<<"\t"<<k<<endl;

   if(((y+2)*yFact)%k==0){
        cout<<y+1<<endl;
        notFound=false;
        break;
   }

   else{
    y++;
    yFact=yFact*y;

   }

}

if(notFound==true){
    cout<<-1<<endl;
}




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
