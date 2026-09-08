class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int j=h.size()-1;
        int a=0;
        int ma=0;
        while(i<j)
        {
            a=(j-i)*min(h[i],h[j]);
            ma=max(a,ma);
            if(h[i]<h[j]) 
           i++;
           else
           j--;
        }
        return ma;
    }
};
