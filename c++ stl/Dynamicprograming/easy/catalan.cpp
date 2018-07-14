#include<bits/stdc++.h>

using namespace std;

// iterativly

/*

int catalan(int n)
{
    int no = 0;
  if(n==1)
    return 1;
  for(int i=1;i<=n-1;i++)
  {
     no += catalan(i)*catalan(n-i);
  }
  return no;
}

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
    cout<<catalan(i)<<" ";
}

*/

// dynamicaly

/*

int arrcata[10000] = {0};


// using bottomup;

void findcata(int n)
{
    int c = 2;
    while(c<=n)
    {
         for(int i=1;i<=c-1;i++)
       {
          arrcata[c] += arrcata[i]*arrcata[c-i];
       }
       cout<<arrcata[c]<<" ";
          c++;
    }
}

int main()
{
    arrcata[1] = 1;
  int n;
  cin>>n;
  cout<<arrcata[1]<<" ";
  findcata(n);
}

*/

//using binomial coefficient
use the formula 1/(n+1)(2n  n);


