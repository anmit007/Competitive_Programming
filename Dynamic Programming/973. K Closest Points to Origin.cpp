class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
         vector<vector<int>>ans;
        int n=arr.size();
        priority_queue<pair<double,vector<int>>>pq;
        for(int i=0;i<n;i++){
            pq.push({sqrt(arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1]),arr[i]});
             if(pq.size()>k){
            pq.pop();
        }
        }
       while(!pq.empty()){
           ans.push_back(pq.top().second);
           pq.pop();
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};
