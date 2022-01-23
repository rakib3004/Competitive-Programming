#include<bits/stdc++.h>
using namespace std;


void test()
{



    string s,a,b;
    int n,m;


    cin>>n;
    cin>>s;
    cin>>m;
    cin>>a;
    cin>>b;

    int count=0;
    int i;

    int x = s.size();

    int array[x]= {0};
    set<char> initWord;

    int j=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='*')
        {
            count++;
            array[j]=i;
            j++;
        }
        else{
           initWord.insert(s[i]);
        }
    }

    int k=j;
    set<char> puzzleWord;


    for(i=0; i<k; i++)
    {
        puzzleWord.insert(a[array[i]]);
    }
  for(i=0; i<k; i++)
    {
        puzzleWord.insert(b[array[i]]);
    }
int calc=0;

    for (auto it = puzzleWord.begin(); it !=
            puzzleWord.end(); ++it)
    {

        auto y =initWord.find(*it);

        if(*y>=0){
            calc++;
        }
    }

    cout<<calc<<endl;


    return;

}
int main()
{



    test();




    return 0;

}
