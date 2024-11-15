class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int mine = 1e9;
        int v=0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>r(m, std::vector<int>(n, 0));
        for(int i=0;i<matrix.size();i++)
        {
            mine = 1e9;
            v=0;
            for(int j=0;j<matrix[0].size();j++)
            {
                if(mine>matrix[i][j])
                {
                    mine = matrix[i][j];
                    v = j;
                }
            }
           // cout<< mine<<endl;
            r[i][v] = mine;
           // cout<< r[i][v] << endl;
            
        }
        v=0;
         vector<int>ans;
         mine=1e9;
        for(int j=0;j<matrix[0].size();j++)
        {
            mine = -1e9;
            v=0;
            for(int i=0;i<matrix.size();i++)
            {
                //cout<<matrix[i][j] <<endl;
               if(matrix[i][j]>mine)
               {
                    mine= matrix[i][j];
                    v=i;
               }
            }
            if(r[v][j]==mine)
            {
           
                cout<<r[v][j] <<endl;
                ans.push_back(r[v][j]);
            }

            
        }
       
        
         return ans;

    }
};
