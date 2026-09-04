class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int num:nums)
        {
            freq[num]++;
        }
        vector<int>elements;
        for(auto it:freq)
        {
           elements.push_back(it.first);
        }
        sort(elements.begin(),elements.end(),[&](int a,int b){
         return freq[a]>freq[b];
        });
        for(int i=0;i<k;i++)
        {
          ans.push_back(elements[i]);
        }
        return ans;
    }
};
