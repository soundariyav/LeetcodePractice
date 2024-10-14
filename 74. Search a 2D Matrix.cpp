class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m==0)
        {
            return false;
        }
        int n=matrix[0].size();
        int pi = 0;
        int pe=0;
        int left=0; int right = m*n-1;
        while(left<=right)
        {
           pi = left+(right-left)/2;
           pe = matrix[pi/n][pi%n];
           if(pe==target)
           {
            return true;
           }
           if(pe<target)
           {
             left = pi+1;
           }
           if(pe>target)
           {
                right=pi-1;
           }
        }
        return false;
    }
};
