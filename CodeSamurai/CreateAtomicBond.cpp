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

    if(f+e<d||(a+b+c)%2==1){
       cout<<"Impossible"<<endl;
       return;
    }


    int m = d-e;

    int d0 = d;
    int e0 = e;
    int f0 =f;

    bool checkEquality=false;

    while(checkEquality==false)
    {
        if(f-m==0)
        {
            checkEquality=true;
        }
        else
        {
            m=m+2;
            d--;
            e--;
            checkEquality=false;
        }


    }
    int ax = min(d,e);
    int ay = e0-ax;
    int az = d0-ax;


    if(a==d0&&b==e0)
    {
        cout<<ax<<" "<<ay<<" "<<az<<" "<<endl;

    }

    else if(b==d0&&a==e0)
    {
        cout<<ax<<" "<<az<<" "<<ay<<" "<<endl;

    }
    else  if(a==f&&b==d0)
    {
        cout<<az<<" "<<ax<<" "<<ay<<" "<<endl;

    }
    else  if(a==f&&b==e0)
    {
        cout<<ay<<" "<<ax<<" "<<az<<" "<<endl;

    }
    else  if(a==d0&&b==f)
    {
        cout<<az<<" "<<ay<<" "<<ax<<" "<<endl;

    }
    else  if(a==e0&&b==f)
    {
        cout<<ay<<" "<<az<<" "<<ax<<" "<<endl;

    }



    return;

}
int main()
{



    test();


    return 0;

}
