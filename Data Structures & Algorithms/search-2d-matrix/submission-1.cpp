class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size();
        int row=matrix.size();

     int l=0;
     int r=row*col-1;
     while(l<=r)
     {
        int mid=(l+r)/2;
        int rows=mid/col;
        int cols=mid%col;
        if(matrix[rows][cols]==target)
        return true;
        if(matrix[rows][cols]<target)
        l=mid+1;
        else
        r=mid-1;
     }
     return false;
        
    }
};
