class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int N = nums.size();
        vector<vector<int>> powerSet = {{}};
        for (int i = 0; i < N; i++) {
            int M = powerSet.size();
            for (int j = 0; j < M; j++) {
                powerSet.push_back(powerSet[j]);
                powerSet.back().push_back(nums[i]);
            }
        }
        return powerSet;
    }
};
