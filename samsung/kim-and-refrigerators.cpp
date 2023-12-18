#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum_cost = 100000;

int a[10][2];

int n;
int sx,sy,dx,dy;

int hamilton_distance(int x1,int y1,int x2,int y2)
{

    return abs(x1-x2) + abs(y1-y2);
}

void calculate_minimum_distance(int l, int r)
{

    if(l==r)
    {
        int local_cost =0;
        local_cost =hamilton_distance(sx,sy,a[0][0],a[0][1]) +hamilton_distance(dx,dy,a[r][0],a[r][1]);


        for(int i=0; i<r; i++)
        {
            local_cost = local_cost+hamilton_distance(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
        }

        minimum_cost = min(minimum_cost,local_cost);

    }
    else
    {

        for(int i=l; i<=r; i++)
        {
            swap(a[i][0],a[l][0]);
            swap(a[i][1],a[l][1]);
            calculate_minimum_distance(l+1,r);
            swap(a[i][0],a[l][0]);
            swap(a[i][1],a[l][1]);


        }
    }

}

void solve(int t)
{
minimum_cost = 100000;
    cin>>n;

    cin>>sx>>sy;
    cin>>dx>>dy;

    int i;

    for(i=0; i<n; i++)
    {
        cin>>a[i][0]>>a[i][1];
    }

    calculate_minimum_distance(0,n-1);

    cout<<"# "<<t+1<<" "<<minimum_cost<<endl;

}
int main(){
     int t;

     for(t=0; t<10; t++)
 {
     solve(t);

 }

return 0;
}
