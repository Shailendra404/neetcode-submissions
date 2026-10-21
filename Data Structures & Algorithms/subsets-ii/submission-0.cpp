class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
void solve(vector<int>nums,int i)
{
    if(i==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums,i+1);
    temp.pop_back();
    int j=i+1;
    while(j<nums.size() && nums[j]==nums[i])
    j++;
    solve(nums,j);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(nums,0);
        return ans;
    }
};
