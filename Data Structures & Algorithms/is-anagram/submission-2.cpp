class Solution {
public:
    bool isAnagram(string s, string t) {
        for(int i=0;i<s.size();i++)
        {
            int flag=0;
            for(int j=0;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                  flag++;
                  t.erase(t.begin()+j);
                  break;
                }
            }
            if(flag==0)
            return false;
        }
        return true;
    }
};
