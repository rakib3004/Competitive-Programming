#include<bits/stdc++.h>
using namespace std;


long long coloring[26];
void test()
{

   string text;

   cin>>text;

   int lengthText = text.length();

   memset(coloring, 0, sizeof coloring);

   int i;

   for(i=0;i<lengthText;i++){

    coloring[text[i]-'a']++;
   }
   long slots=0, colors=0;

    for(i=0;i<26;i++){
        if(coloring[i]>=2){
            slots+=2;
        }
        else{
            colors+=coloring[i];
        }
   }

   long results = (slots+colors)/2;
   cout<<results<<endl;


    return;

}
int main()
{


    int t;

    cin>>t;

    while(t--)
    {

        test();

    }


    return 0;

}
