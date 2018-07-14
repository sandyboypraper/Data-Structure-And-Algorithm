#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int counti = 1;
    int i = 1;
    int j = 1;
    int k = 1;
    int no = 0;
    while(counti<=n)
    {
        no = min(2*i,min(3*j,5*k));
        if(no==2*i)
        {
            i++;
        }
        else if(no==3*j)
        {
            j++;
        }
        else if(no==5*k)
        {
            k++;
        }
        counti++;
    }
    cout<<no;
}
