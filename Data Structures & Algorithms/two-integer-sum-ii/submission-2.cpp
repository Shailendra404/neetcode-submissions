class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int tar) {
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            if(sum==tar)
            return{l+1,r+1};
            if(sum<tar)
            l++;
            if(sum>tar)
            r--;
        }
    }
};
