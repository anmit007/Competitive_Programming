class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      map<int,int> m ;
      m[0] = 1;
      int ans = 0 , prefSum = 0;
        for(int i = 0 ;i < nums.size() ; i++)
        {
            prefSum+= nums[i];
            int rem = prefSum%k;
            if(rem<0)rem+=k;
            if(m.find(rem)!=m.end())
            {
                ans+= m[rem];
            }
            m[rem]++;
        }
        return ans;
    }
};
