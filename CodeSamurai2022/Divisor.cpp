#include<bits/stdc++.h>
using namespace std;


void test(int it)
{
int n;
cin>>n;
int i;
    set<int> iSet;

for(i=1;i<=sqrt(n);i++){
if(n%i==0){
    iSet.insert(i);
    iSet.insert(n/i);
}
}
cout<<"Case "<<it<<":";

for (auto it = iSet.begin(); it != iSet.end(); ++it)
        cout << ' ' << *it;






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
cout<<endl;
    }


    return 0;

}
