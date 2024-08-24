class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i =0;
        int n = matrix.size();
        int m = matrix[i].size();
        vector<vector<int>> res(m,vector<int>(n));
        
        for(int j =0; j<m;j++)
        {
            i=0;
            int k =0;
            cout<<"k value is " << k << endl;
            while(i<n)
            {
                cout<<"i value is" << i << endl;
                cout<<"j value is " << j << endl;
                res[j][i]= matrix[i][j];
                int a = matrix[i][j];
                cout<<"element pushed in k is "<< a << endl;
                i++;
                
                
            }
        }
        return res;
    }
};
