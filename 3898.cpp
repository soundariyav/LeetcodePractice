class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int number = matrix[0].size();
        vector<int>ans(number,0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==1){
                    ans[j]++;
                }
            }
        }
        return ans;
    }
};
