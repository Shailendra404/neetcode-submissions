class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        int f=1;
        for(int i=0;i<k;i++)
        {
          if(f==k)
          return nums[i];
          f++;
        }
    }
};
