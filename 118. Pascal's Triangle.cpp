class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back(vector<int>());
        ans[0].push_back(1);
        int sum=2;
        for(int i=1;i<numRows;i++){
            vector<int>row;
            vector<int>prev = ans[i-1];
            row.push_back(1);
            for(int j=1;j<i;j++){
                row.push_back(prev[j-1]+prev[j]);
                
            }
            row.push_back(1);
            ans.push_back(row);
        }
        return ans;
    }
};
