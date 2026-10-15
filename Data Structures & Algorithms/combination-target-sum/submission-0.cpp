class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
void solve(vector<int>nums,int t,int i,int s)
{
   if(s>t || i==nums.size())
   return;
   if(s==t)
   {
       ans.push_back(temp);
       return;
   }
   temp.push_back(nums[i]);
   solve(nums,t,i,s+nums[i]);
   temp.pop_back();
   solve(nums,t,i+1,s);

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solve(nums,target,0,0);
        return ans;
    }
};
