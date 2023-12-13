#include<bits/stdc++.h>
using namespace std;

int countingValleys(int steps, string path)
{

    int i;
    int level = 0;
    int valley = 0;

    for(i=0; i<steps; i++)
    {
        if(level ==0 && path[i]=='D')
        {
            level--;
            valley++;
        }
        else if(path[i]=='D')
        {
            level--;
        }
        else
        {

            level++;
        }
    }
    return valley;
}

int main()
{

    int steps =0;
    cin>>steps;

    string path;


    cin>>path;

    int result = countingValleys(steps, path);

    cout << result << "\n";

    return 0;
}


