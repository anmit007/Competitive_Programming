class Solution {
public:
int count=0;
     void dfs(int node,vector<int>adjLis[],vector<int>&vis){
         vis[node]=1;
         for(auto it:adjLis[node]){
             if(!vis[it]){
                 dfs(it,adjLis,vis);
             }
         }
     }

    int findCircleNum(vector<vector<int>>& adj) {
        int v=adj.size();
        vector<int>adjLis[v];
        //creating adjmatrix to list
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLis[i].push_back(j);
                    adjLis[j].push_back(i);
               }
            }
        }
        vector<int> vis(v, 0);
        for(int i=0;i<v;i++){
            if(vis[i]!=1){
                count ++;
                dfs(i,adjLis,vis);
            }
        }
        return count;
    }
};
