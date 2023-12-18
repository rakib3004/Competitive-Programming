#include<iostream>
using namespace std;

int a[50][50];
int n,m, length;


void endoscope(int x, int y, int currentLength)
{
    if(currentLength>=length)
    {
        return;
    }
    else if(abs(a[x][y])==1)
    {
        a[x][y] = -1;
        if(x+1<n&&abs(a[x+1][y])==1||abs(a[x+1][y])==2||abs(a[x+1][y])==4||abs(a[x+1][y])==7)
        {
            endoscope(x+1,y,currentLength+1);
        }
        if(x-1>=0&&abs(a[x-1][y])==1||abs(a[x-1][y])==2||abs(a[x-1][y])==5||abs(a[x-1][y])==6)
        {
            endoscope(x-1,y,currentLength+1);
        }
        if(y+1<m&&abs(a[x][y+1])==1||abs(a[x][y+1])==3||abs(a[x][y+1])==6||abs(a[x][y+1])==7)
        {
            endoscope(x,y+1,currentLength+1);
        }
        if(y-1>=0&&abs(a[x][y-1])==1||abs(a[x][y-1])==3||abs(a[x][y-1])==4||abs(a[x][y-1])==5)
        {
            endoscope(x,y-1,currentLength+1);
        }
    }
    else if(abs(a[x][y])==2)
    {
        a[x][y] = -2;
        if(x+1<n&&abs(a[x+1][y])==1||abs(a[x+1][y])==2||abs(a[x+1][y])==4||abs(a[x+1][y])==7)
        {
            endoscope(x+1,y,currentLength+1);
        }
        if(x-1>=0&&abs(a[x-1][y])==1||abs(a[x-1][y])==2||abs(a[x-1][y])==5||abs(a[x-1][y])==6)
        {
            endoscope(x-1,y,currentLength+1);
        }

    }

    else if(abs(a[x][y])==3)
    {
        a[x][y] = -3;

        if(y+1<m&&abs(a[x][y+1])==1||abs(a[x][y+1])==3||abs(a[x][y+1])==6||abs(a[x][y+1])==7)
        {
            endoscope(x,y+1,currentLength+1);
        }
        if(y-1>=0&&abs(a[x][y-1])==1||abs(a[x][y-1])==3||abs(a[x][y-1])==4||abs(a[x][y-1])==5)
        {
            endoscope(x,y-1,currentLength+1);
        }
    }

    else if(abs(a[x][y])==4)
    {
        a[x][y] = -4;

        if(x-1>=0&&abs(a[x-1][y])==1||abs(a[x-1][y])==2||abs(a[x-1][y])==5||abs(a[x-1][y])==6)
        {
            endoscope(x-1,y,currentLength+1);
        }
        if(y+1<m&&abs(a[x][y+1])==1||abs(a[x][y+1])==3||abs(a[x][y+1])==6||abs(a[x][y+1])==7)
        {
            endoscope(x,y+1,currentLength+1);
        }

    }

    else if(abs(a[x][y])==5)
    {
        a[x][y] = -5;
        if(x+1<n&&abs(a[x+1][y])==1||abs(a[x+1][y])==2||abs(a[x+1][y])==4||abs(a[x+1][y])==7)
        {
            endoscope(x+1,y,currentLength+1);
        }

        if(y+1<m&&abs(a[x][y+1])==1||abs(a[x][y+1])==3||abs(a[x][y+1])==6||abs(a[x][y+1])==7)
        {
            endoscope(x,y+1,currentLength+1);
        }

    }

    else if(abs(a[x][y])==6)
    {
        a[x][y] = -6;
        if(x+1<n&&abs(a[x+1][y])==1||abs(a[x+1][y])==2||abs(a[x+1][y])==4||abs(a[x+1][y])==7)
        {
            endoscope(x+1,y,currentLength+1);
        }

        if(y-1>=0&&abs(a[x][y-1])==1||abs(a[x][y-1])==3||abs(a[x][y-1])==4||abs(a[x][y-1])==5)
        {
            endoscope(x,y-1,currentLength+1);
        }
    }

    else if(abs(a[x][y])==7)
    {
        a[x][y] = -7;

        if(x-1>=0&&abs(a[x-1][y])==1||abs(a[x-1][y])==2||abs(a[x-1][y])==5||abs(a[x-1][y])==6)
        {
            endoscope(x-1,y,currentLength+1);
        }

        if(y-1>=0&&abs(a[x][y-1])==1||abs(a[x][y-1])==3||abs(a[x][y-1])==4||abs(a[x][y-1])==5)
        {
            endoscope(x,y-1,currentLength+1);
        }
    }

    else
    {
        return;
    }
}
void solve()
{
    int x,y;

    cin>>n>>m>>x>>y>>length;

    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int currentLength = 0;
    endoscope(x,y,currentLength);

    int totalPipe = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]<0)
            {
                totalPipe++;
            }

        }

    }

    cout<<totalPipe<<"\n";



}
int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        solve();
    }
}
