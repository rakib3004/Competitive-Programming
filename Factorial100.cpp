#include<bits/stdc++.h>
using namespace std;


void test()
{
    int n;


    cin>>n;


    string names[n];

    bool impossible=true;
    int i,j;

    int startAscii=97;
    int finishAscii=122;

    for(i=0; i<n; i++)
    {
        cin>>names[i];

    }
    int count[26]= {0};



    for(i=startAscii; i<=finishAscii; i++)
    {


        for(j=0; j<n; j++)
        {
            if(names[j][0]==char(i))
            {
                count[i-startAscii]++;
            }
        }


        if(count[i-startAscii]>=3)
        {
             impossible=false;

            cout<<char(i);
        }

    }

    if(impossible==true){
        cout<<"impossible"<<endl;
    }



    return;


}



int main()
{


    int t;

    cin>>t;
    while(t--)
    {
        test();

        if(t!=0){
            cout<<endl;

        }

    }


    return 0;

}
