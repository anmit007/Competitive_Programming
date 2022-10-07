#include <bits/stdc++.h>
using namespace std;


int main()
{
int n; cin>>n;
int ar[n],s=0;
for (int i = 0; i<n; i++)
{
    cin>>ar[i];
    s+=ar[i];
}

 for (int i = 1; i <= 5; i++)
 {
     if ((s+i)%(n+1) != 1)
     {
        cout<<i<<endl;
        break;
     }
     
 }
 
    return 0;
}