#include<bits/stdc++.h>
using namespace std;


void test()
{


   int i,j;


   for(i=1;i<=6;i++){
    for(j=1;j<=6;j++){


        if(i==1||j==1||i==6||j==6){
            printf("* ");
        }
        else if((i==3&&j==3)||(i==3&&j==4)||(i==4&&j==3)||(i==4&&j==4)){
            printf("* ");
        }
        else{
            printf("  ");
        }

    }
    printf("\n");
   }

    return;

}
int main()
{


    int t=1;



    while(t--)
    {

        test();

    }


    return 0;

}
