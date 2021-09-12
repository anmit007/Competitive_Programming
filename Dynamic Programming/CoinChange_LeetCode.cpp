//problem link - https://leetcode.com/problems/coin-change/
class Solution {
public:
    int minCoin(int value ,vector<int>&coins){
        vector<int>dp(value+1);
        dp[0] = 0 ;
        for(int i = 1 ; i <=  value ; i++){
            int ans = INT_MAX ;
            for(int j = 0 ; j < coins.size();j++){
                if(i-coins[j]<0)continue;
                ans = min(ans,dp[i-coins[j]]);
            }
            if(ans==INT_MAX){
                dp[i] = INT_MAX;
            }else 
            dp[i] = 1+ans; 
        }
        return dp[value];
    }
    int coinChange(vector<int>& coins, int amount) {
        int x = minCoin(amount,coins);
        return (x==INT_MAX) ? -1 : x ;
    }
};
