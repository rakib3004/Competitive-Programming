#include<bits/stdc++.h>
using namespace std;



int main()
{



long long a;

cin>>a;

int i;


for(i=60;i>=0;i--){

    if(a&(111<<i)){
        cout<<i<<endl;
        break;
    }

}


    return 0;

}





