class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int flag=1;
        int mflag=1;
        for(int i=1;i<nums.size();i++)
        {
          if(nums[i]-nums[i-1]==1)
          {
            flag++;
            if(flag>mflag)
            mflag=flag;
          }
          else if(nums[i]-nums[i-1]==0)
          continue;
          else{
            flag=1;
          }
        }
        return mflag;
    }
};
