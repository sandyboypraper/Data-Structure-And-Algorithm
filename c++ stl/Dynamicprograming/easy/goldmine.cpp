#include<bits/stdc++.h>

using namespace std;

/*
Given a gold mine of n*m dimensions. Each field in this mine contains a positive
integer which is the amount of gold in tons. Initially the miner is at first column
but can be at any row. He can move only (right->,right up /,right down\) that is
from a given cell, the miner can move to the cell diagonally up towards the right
or right or diagonally down towards the right. Find out maximum amount of gold
he can collect.
*/
/*
we iterate column by coulmn
*/

int maxii(int i,int j,int dp[20][20])
{
   int a = dp[i][j-1];
   int b = dp[i-1][j-1];
   int c = dp[i+1][j-1];
   return max(a,max(b,c));
}

int main()
{
   int n,m;
   cin>>n>>m;

   int arr[20][20];
   for(int i=1;i<=n;i++)
   {
      for(int j = 1;j<=m;j++)
      {
         cin>>arr[i][j];
      }
   }
   int dp[20][20];
   memset(dp,0,sizeof(dp));
   for(int j = 1;j<=m;j++)
   {
      for(int i= 1;i<=n;i++)
      {
         dp[i][j] = maxii(i,j,dp) + arr[i][j];
      }
   }
   int ans = 0;
   for(int i=1;i<=n;i++)
   {
      if(dp[i][m]>ans)
        ans = dp[i][m];
   }
   cout<<ans;
}
