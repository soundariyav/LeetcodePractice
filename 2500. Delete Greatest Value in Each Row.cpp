class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size();
        int i=0;
        int n = grid[i].size();
        vector<priority_queue<int>>pq(m);
        for(i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                pq[i].push(grid[i][j]);
            }
        }
        int count =0;
        while(n>0)
        {
            int max = 0;
            for(int i = 0;i<m;i++)
            {
                if(max<pq[i].top())
                {
                    max = pq[i].top();
                }
                pq[i].pop();
            }
            count = count+max;
            n--;
        }
        return count;

        
    }
};
