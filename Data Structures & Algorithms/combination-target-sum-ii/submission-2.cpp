class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
 void solve(vector<int>c,int t,int s,int i)
 {
     if(s==t)
    {
        ans.push_back(temp);
        return;
    }
    if(s>t || i==c.size())
    return;
    temp.push_back(c[i]);
    solve(c,t,s+c[i],i+1);
    temp.pop_back();
    int j=i+1;
    while(j<c.size() && c[j]==c[i])
    j++;

    solve(c,t,s,j);
 }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0,0);

        return ans;
    }
};
