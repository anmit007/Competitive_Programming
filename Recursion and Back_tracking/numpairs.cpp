class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>remFreq(61,0);
        int ans = 0;
        for(auto &it : time)
        {
            if(it%60==0)ans+=remFreq[it%60];
            ans+=remFreq[60-it%60];
            remFreq[it%60]++;
        }
        return ans;
        
    }
};
