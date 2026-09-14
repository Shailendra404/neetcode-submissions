class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        vector<int>f2(26,0);
        vector<int>f1(26,0);
        for(char c:s1)
        f1[c-'a']++;
        int l=0;
        for(int r=0;r<s2.size();r++)
        {
            while(r-l+1 > s1.size())
            {
                f2[s2[l]-'a']--;
                l++;
            }
            f2[s2[r]-'a']++;
            if(f1==f2)
            return true;
        }
        return false;
    }
};
