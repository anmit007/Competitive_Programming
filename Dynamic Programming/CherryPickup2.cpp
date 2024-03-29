class Solution {
public:
    int f(int i1,int j1,int j2,vector<vector<int>>&a,vector<vector<vector<int>>>&dp){
        int r=a.size();
        int c=a[0].size();
        if(j1<0 || j1>=c || j2<0 || j2>=c ) return -1e8;
        if(dp[i1][j1][j2]!=-1) return dp[i1][j1][j2];
        if(i1==r-1){
            if(j1==j2) return a[i1][j1];
            else return a[i1][j1]+a[i1][j2];
        }
        int maxi=-1e8;
        for(int dj1=-1;dj1<=1;dj1++){
            for(int dj2=-1;dj2<=1;dj2++){
                int value=0;
                if(j1==j2) value=a[i1][j1];
                else value= a[i1][j1]+a[i1][j2];
                value+=f(i1+1,j1+dj1,j2+dj2,a,dp);
                maxi=max(maxi,value);
            }
        }
        return dp[i1][j1][j2]= maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
        return f(0,0,c-1,grid,dp);
    }
