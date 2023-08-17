#include <bits/stdc++.h>
using namespace std;
  int dp[500][500];
int maxcoins(int A[],int siz)
{
    int nums[siz+2];
    int n=1;

    for(int i=0;i<siz;i++)
    {
        if(A[i]>0)
        {
            nums[n] = A[i];
            n++;
        }
    }
    nums[0] = nums[n] = 1;
    n++;



    for(int j=2;j<n;j++)
    {
        for(int left=0;left<n-j;left++)
        {
            int right = left+j;
            for(int i = left+1;i<right;i++)
            {
                if(left==0 && right==n-1)
                    dp[left][right] = max(nums[left]*nums[i]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
                else
                    dp[left][right] = max(nums[left]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<"\n----------------\n";
        }
    }
    return dp[0][n-1];
}

int main()
{
    int siz;
    cin >> siz;
    int A[siz];
    for(int i=0;i<siz;i++)
        cin >> A[i];

    int ans = maxcoins(A,siz);
    cout << ans << endl;
    return 0;
}
