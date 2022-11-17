#include<bits/stdc++.h>
using namespace std;


void test(int it)
{

int n;

cin>>n;

int array[n]={0};

int i,j;
pair<int,int>arrayValue[n];
for(i=0;i<n;i++){
    cin>>array[i];
    arrayValue[i].first=array[i];
    arrayValue[i].second=i;

}

sort(arrayValue,arrayValue+n);

vector<bool>visited(n,false);

int ans=0;
int swappingSize=0;

for(i=0;i<n;i++){
    if(visited[i]||arrayValue[i].second==i)
        continue;


        swappingSize=0;
        j=i;
    while(!visited[j]){

        visited[j]=1;

        j=arrayValue[j].second;
        swappingSize++;
    }

    if(swappingSize>0){
        ans+=(swappingSize-1);
    }

}

cout<<"Case "<<it<<": ";
cout<<ans<<endl;


 return;


}


int main()
{



    int t;

    cin>>t;
int it =0;
    while(t--)
    {
it++;
        test(it);
    }

    return 0;

}




