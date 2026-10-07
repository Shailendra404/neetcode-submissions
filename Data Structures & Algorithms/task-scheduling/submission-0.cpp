class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>f(26,0);
        int mf=0;
        int mc=0;
        for(auto fr:tasks)
        {
          f[fr-'A']++;
          mf=max(mf,f[fr-'A']);
        }
        for(auto fr:f)
        {
            if(fr==mf)
            mc++;
        }
        int slot=(mf-1)*(n+1)+mc;
        return max((int)tasks.size(),slot);
    }
};
