class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        vector<int>f(26,0);
        vector<int>w(26,0);
        for(char c: s1)
        f[c-'a']++;
        for(int i=0;i<s1.size();i++)
        w[s2[i]-'a']++;
        if(w==f)
        return true;
        int l=0;
        for(int r=s1.size();r<s2.size();r++)
        {
            w[s2[l]-'a']--;
            l++;
            w[s2[r]-'a']++;
            if(w==f)
            return true;
        }
        return false;
    }
};
