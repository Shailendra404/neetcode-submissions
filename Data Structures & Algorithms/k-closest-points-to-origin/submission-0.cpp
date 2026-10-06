class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,greater<pair<int,vector<int>>>>pq;
        for(auto p:points)
        {
            int x=p[0];
            int y=p[1];
            int distance=x*x+y*y;
            pq.push({distance,p});
        }
        vector<vector<int>>ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
