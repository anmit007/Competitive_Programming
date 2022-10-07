#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n; cin>>n;
map <string,int> mp;
string ans;

for (int i = 0; i < n; i++)
{
    string s;
     cin>>s;
    mp[s]++;
}
  map <string,int> :: iterator it;

      
       int x = 0;

        for (it=mp.begin(); it!=mp.end(); it++)
        {
            if (it->second > x)
            {
                x = it->second;
                ans = it->first;
            }
        }

       cout<<ans;



   
   
   
    return 0;
}