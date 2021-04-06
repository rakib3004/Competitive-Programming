#include<bits/stdc++.h>
using namespace std;


void test()
{


    return;

}
int main()
{

    int r,c;


    cin>>r>>c;


    char cell[r+1][c+1];


    int i=0,j=0;


    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            cin>>cell[i][j];
        }
        getchar();
    }

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(cell[i][j]=='P')
            {


                int x,y;
                int a=i,b=j;

                for(x=a-1; x<=a+1; x++)
                {
                    for(y=b-1; y<=b+1; y++)
                    {
                        if(cell[x][y]=='W'&&(abs(x-y)==1))
                        {
                            cout<<"No"<<endl;
                            return 0;
                        }
                    }
                }
            }

        }
    }

    cout<<"Yes"<<endl;

    return 0;

}
