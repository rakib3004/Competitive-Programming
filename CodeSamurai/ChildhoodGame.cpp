#include<bits/stdc++.h>
using namespace std;

int var=0;

void test()
{

    var++;

int a;
string name;

cin>>a>>name;
string winner;

if(name=="Alice"){
    if(a&1){
        winner="Bob";
    }
    else{
       winner= "Alice";
    }
}
else{
   if(!(a&1)){
        winner="Bob";
    }
    else{
        winner="Alice";
    }

}

cout<<"Case "<<var<<": "<<winner<<endl;

    return;

}
int main()
{


   long long int t;

    cin>>t;

    while(t--)
    {

        test();

    }


    return 0;

}
