#include<bits/stdc++.h>
using namespace std;

int caseI;
bool checkBeautiful(int n){

int number;

 while(n!=0){

     int a=n%10;
     if(a%2==0){
         n=n/10;
     }
     else{

         return false;
     }
 }

 return true;

}
void test()
{
    caseI++;
         int n,a;

         cin>>n;

        int i=0;

        int left, right;

        for(; i<n;i++){
            if(checkBeautiful(n+i)){
                right=i;
                break;
            }

        }

         for(; i<n;i++){
            if(checkBeautiful(n-i)){
                left=i;
                break;
            }

        }

        int result= min(left,right);

        cout<<"case #"<<caseI<<": "<<result<<endl;


    return;

}
int main()
{
caseI=0;

    int t;

    cin>>t;

    while(t--)
    {

        test();

    }


    return 0;

}
