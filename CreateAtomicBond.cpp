#include<bits/stdc++.h>
using namespace std;

int findLargest(int a, int b, int c)
{


    if(a>=b&&a>=c)
    {
        return a;
    }
    else if(b>=a&&b>=c)
    {

        return b;
    }
    else
    {
        return c;
    }


}

int findSecondLargest(int a, int b, int c)
{


    if(a>=b&&a>=c)
    {

        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }

    }
    else if(b>=a&&b>=c)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {


        if(a>b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }



}


void test()
{

    int a,b,c;


    cin>>a>>b>>c;
int d = findLargest(a,b,c);
int e = findSecondLargest(a,b,c);

int f1= min(a,b);
int f2= min(f1,c);
int f= min(f1,f2);


int m = d-e;

int d1 = d;
int e1 = e;

bool checkEquality=false;

while(checkEquality==false){
if(f-m==0){
    checkEquality=true;
}
else{
    m=m+2;
    d--;
    e--;
checkEquality=false;
}


}
int commondBigBond = min(d,e);
int oneOtherBond = d1-commondBigBond;
int anotherBond = e1-commondBigBond;

cout<<commondBigBond<<" "<<oneOtherBond<<" "<<anotherBond<<" "<<endl;



    return;

}
int main()
{



    test();


    return 0;

}
