#include <bits/stdc++.h>
using namespace std;
int main() {
   long long int n; cin>>n;
   map <int,vector<int>> mp;
   for (int i = 0; i < n; i++)
   {
     int x; cin>>x;
     mp[x].push_back(i);
   }
   cout<<mp.size()<<endl;
   for (auto it:mp)
   {
       cout<<it.first<<" ";
       if (it.second.size()==1)
       {
           cout<<"0"<<endl;
       }
       else
       {
           cout<<it.second[1]-it.second[0]<<endl;
       }
       
       
   }
   
    
 

   
    
   
}

