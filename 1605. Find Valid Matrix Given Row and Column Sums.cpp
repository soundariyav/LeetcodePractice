class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n1 =rowSum.size();
        int n2 = colSum.size();
       // int m = 3, n = 4; // Example dimensions
       
        vector<vector<int>> matrix(n1, vector<int>(n2, 0));
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                int min_value=0;
                min_value = min(rowSum[i], colSum[j]);

                rowSum[i] -= min_value;
                colSum[j] -= min_value;
                matrix[i][j] = min_value;
            }
        }
        return matrix;
    }
};
