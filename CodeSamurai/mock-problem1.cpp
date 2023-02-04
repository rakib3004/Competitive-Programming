#include<bits/stdc++.h>
using namespace std;


void test()
{


    return;

}
int main()
{


//    int t;
//
//    cin>>t;
//
//    while(t--)
//    {
//
//        test();
//
//    }


int a,b,c;


cin>>a>>b>>c;


if(a==b&&b==c){
    cout<<"Equilateral Triangle"<<endl;
}

else if(a==b){
        cout<<"Isosceles Triangle"<<endl;


}
else if(b==c){
        cout<<"Isosceles Triangle"<<endl;


}

else if(a==c){
        cout<<"Isosceles Triangle"<<endl;


}
else{
        cout<<"Bad Triangle"<<endl;

}



    return 0;

}
