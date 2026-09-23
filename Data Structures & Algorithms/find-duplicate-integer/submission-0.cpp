class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev=0;
        int curr=0;
        for(int i=1;i<nums.size();i++)
        {
            prev=nums[i-1];
            curr=nums[i];
            if(prev==curr)
            return nums[i];
        }
        return 0;
    }
};
