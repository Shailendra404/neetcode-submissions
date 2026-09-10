class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int ma=0;
        while(i<j)
        {
            int a=min(heights[i],heights[j])*(j-i);
            ma=max(a,ma);
            if(heights[i]<heights[j])
            i++;
            else
            j--;
        }
        return ma;
    }
};
