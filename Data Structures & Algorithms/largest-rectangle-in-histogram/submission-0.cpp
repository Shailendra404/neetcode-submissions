class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<=heights.size();i++)
        {
            int curr=(i== heights.size())? 0: heights[i];
            while(!st.empty() && curr<heights[st.top()])
            {
                int h=heights[st.top()];
                st.pop();
                int left= st.empty() ? -1:st.top();
                int width=i-left-1;
                ans=max(ans, width*h);
            }
            st.push(i);
        }
        return ans;
    }
};
