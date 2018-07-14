#include<bits/stdc++.h>

using namespace std;

// no of ways of partitioning a set

int main()
{
     // by using bell tringle

     /*
     1
     1 2
     2 3 5
     5 7 10 15
     15 20 27 37 52
     */
     int arr[100][100];
     arr[0][1] = 1;
     arr[1][1] = 1;
     arr[2][1] = 1;
     int n;
     cin>>n;
     for(int i=2;i<=n;i++)
     {
         arr[i][1] = arr[i-1][i-1];
        for(int j = 2;j<=i;j++)
            {
                arr[i][j] = arr[i][j-1] + arr[i-1][j-1];
            }
     }

     cout<<arr[n][n];
}
