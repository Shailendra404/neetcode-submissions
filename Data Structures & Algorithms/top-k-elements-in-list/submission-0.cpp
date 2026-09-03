class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(int num: nums)
        {
            freq[num]++;
        }
        vector<int>element;
        for(auto it:freq)
        {
            element.push_back(it.first);
        }
        sort(element.begin(),element.end(),[&](int a, int b){
            return freq[a]>freq[b];
        });
     vector<int>ans;
     for(int i=0;i<k;i++)
     {
        ans.push_back(element[i]);
     }
     return ans;
    }
};
