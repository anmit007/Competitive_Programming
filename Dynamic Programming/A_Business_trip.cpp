#include <bits/stdc++.h>
using namespace std;

int main()
{
 int k; cin>>k;
 int ar[12];
 for (int i = 0; i < 12; i++)
 {
     cin>>ar[i];
 }
 int s=0;
 sort(ar,ar+12);
 for (int i = 11; i >=0; i--)
 { 
     if (k==0)
     {
         cout<<"0";
         break;
     }
     
      s+=ar[i];
      if (s>=k)
      {
          cout<<12-i;
          break;
      }
      
      
      
 }
 if(s<k)
      {
          cout<<"-1";
      }
 

   
    
    return 0;
}