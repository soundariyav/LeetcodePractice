class Solution {
public:
    int minFlips(vector<vector<int>>& gird) {
        int r = gird.size();
        cout<<r<< endl;
        int c= gird[0].size();
        cout<< c;
        int row=0;
        int col=0;
        for(int i =0;i<r;i++)
        {
            row = row + rowhel(gird,i);          
        }
        for(int j=0;j<c;j++)
        {
            col = col+colhel(gird,j);
            
        }
        if(row<col)
        {
            return row;
        }
        return col;

    }

    int rowhel(vector<vector<int>>& grid, int i)
    {
        int start = 0;
        int end = grid[0].size()-1;
        int count = 0;
        while(start<end)
        {
            if(grid[i][start]!=grid[i][end])
            {
                auto a = grid[i][start];
                auto b = grid[i][end];
                grid[i][end] = a;
                grid[i][start] = b;
                count ++ ;
            }
            start++;
            end--;

        }
        return count;
    }
    int colhel(vector<vector<int>>& grid, int j)
    {
        int start = 0;
        int end = grid.size()-1;
        int colscount = 0;
        while(start<end)
        {
            if(grid[start][j]!=grid[end][j])
            {
                auto a = grid[start][j];
                auto b = grid[end][j];
                grid[end][j]= a;
                grid[start][j] = b;
                colscount ++ ;
            }
            start++;
            end--;

        }
        return colscount;
    }
};
