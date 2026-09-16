class Solution {
public:
    int trap(vector<int>& heights) {
       int lm=0;
       int rm=0;
       int l=0;
       int r=heights.size()-1;
       int area=0;
       while(r>l)
       {
         if(heights[l]<heights[r])
         {
            if(heights[l]>lm)
            {
                lm=heights[l];
                
            }
            else
            {
                area+= lm-heights[l];
            }
            l++;
         }
         else
         {
           if(heights[r]>rm)
           {
            rm=heights[r];
           } 
           else{
            area+=rm-heights[r];
           }
           r--;
         }
       }
        return area;
    }
};
