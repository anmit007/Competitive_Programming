class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
         vector<int> ans;
        int res = nums.size() - k;
        
        for(auto a: nums)
        {
            while( (ans.size()>0) && (res ) && (a < ans.back() )) //stack not empty/,rest elements to delete not 0/present element smaller than last element,
                
            {
                ans.pop_back();
                res--;
            }
            ans.push_back(a);
        }
        
        while(res)              // if rest elements left then remove from top to maintain the reqd size.
        {
            ans.pop_back();
            res--;
        }
        return ans;
    }
};
