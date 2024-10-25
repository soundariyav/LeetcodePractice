class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         tranSpose(matrix);
         reFlect(matrix);

    }
    void tranSpose(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[j][i],matrix[i][j]);
                cout<<matrix[i][j]<<" ";
            }
            //cout<<endl;
        }
    }
    void reFlect(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(auto& r:matrix)
        {
            reverse(r.begin(),r.end());
        }
    }
};
