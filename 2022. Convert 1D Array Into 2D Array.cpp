class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>>ans;
        int size = arr.size();
        if(m*n!=size)return ans;
        ans = vector<vector<int>>(m,vector<int>(n));
        int k=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j] = arr[k];
                k++;
            }
        }
        return ans;
    }
};
