#include<bits/stdc++.h>
using namespace std;


void test(int it)
{
 int n;
 string a;


 cin>>n>>a;

cout<<"Case #"<<it<<": ";

int c=1;
cout<<1<<" "  ;
int i;
for(i=1;i<n;i++){
if(a[i]>a[i-1]){
    c++;
    cout<<c<<" "  ;
}
else{
    c=1;
    cout<<c<<" "  ;
}


}
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
