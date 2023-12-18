#include<iostream>
using namespace std;

int a[100][5];
int b[100][5];
int n;
int maximum_score = 0;


void aeroplanbombing(int rows_left, int position, bool bomb_status, int local_score)
{

    if(rows_left==-1)
    {
        return;
    }

    if(position==-1||position==5)
    {
        return;
    }
    if(a[rows_left][position]==1)
    {
        local_score=local_score+1;
//        printf("a(%d , %d) -> %d\n",rows_left,position, local_score);
        if(local_score>maximum_score){
//        printf("--max(%d , %d) -> %d\n",rows_left,position, maximum_score);

                        maximum_score =local_score;

        }

        aeroplanbombing(rows_left-1, position,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position-1,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position+1,bomb_status,local_score);

    }
    else if(a[rows_left][position]==0)
    {
        aeroplanbombing(rows_left-1, position,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position-1,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position+1,bomb_status,local_score);
    }

    else  if(a[rows_left][position]==2)
    {
        if(bomb_status==false)
        {
            return;
        }
        else
        {

            for(int i=rows_left; i>=0 && i>rows_left-5; i--)
            {
                for(int j=position-2; j<=position+2; j++)
                {
                    if(j>=0 && j<5 && a[i][j]==2)
                    {

                        a[i][j]=0;
                    }
                }
            }


        bomb_status=false;

        aeroplanbombing(rows_left-1, position,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position-1,bomb_status,local_score);
        aeroplanbombing(rows_left-1, position+1,bomb_status,local_score);

            for(int i=rows_left; i>=0 && i>rows_left-5; i--)
            {
                for(int j=position-2; j<=position+2; j++)
                {
                    if(j>=0 && j<5)
                    {
                        a[i][j]=b[i][j];
                    }
                }
            }
        }

    }

}



int main()
{
    int t;

    cin>>t;

    int total = t;
    while(t--)
    {
        cin>>n;

        int i,j;

        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cin>>a[i][j];
                b[i][j] = a[i][j];
            }
        }

        bool bomb_status = true;
        int local_score = 0;
        int position = 2;

        maximum_score = 0;
        int rows_left = n-1;
        aeroplanbombing(rows_left, position,bomb_status,local_score);
        aeroplanbombing(rows_left, position-1,bomb_status,local_score);
        aeroplanbombing(rows_left, position+1,bomb_status,local_score);
        cout<<"#"<<total-t<<" "<<maximum_score<<endl;
    }
    return 0;
}
