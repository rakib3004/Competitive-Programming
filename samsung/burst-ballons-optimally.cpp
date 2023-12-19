#include <iostream>
using namespace std;
int a[20];
int nums[20];
int dp[100][100];
int main()
{

    int m;
    cin >> m;
    for(int i=0;i<m;i++)
        cin >> a[i];

    int nums[m+2];
    int n=1;

    for(int i=0;i<m;i++)
    {
        if(a[i]>0)
        {
            nums[n] = a[i];
            n++;
        }
    }
    nums[0] = nums[n] = 1;





    for(int j=2;j<=n;j++)
    {
        for(int left=0;left<=n-j;left++)
        {
            int right = left+j;
            for(int i = left+1;i<right;i++)
            {
                if(left==0 && right==n)
                    dp[left][right] = max(nums[left]*nums[i]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
                else
                    dp[left][right] = max(nums[left]*nums[right] + dp[left][i] + dp[i][right],dp[left][right]);
            }
        }

    }

    cout << dp[0][n] << endl;

    return 0;
}


