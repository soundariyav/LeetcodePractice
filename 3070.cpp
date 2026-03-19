class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        vector<vector<int>>pr(grid.size(),vector<int>(grid[0].size(),-1));
        vector<vector<int>>sc(grid.size(),vector<int>(grid[0].size(),-1));
        for(int i=0;i<grid.size();i++){
            int sum = 0;
            for(int j=0;j<grid[0].size();j++){
                 sum+= grid[i][j];
                 pr[i][j]= sum;
            }

        }
        for(int j=0;j<grid[0].size();j++){
            int sum = 0;
            for(int i=0;i<grid.size();i++){
                 sum+= grid[i][j];
                 sc[i][j]= sum;
            }
        }
        int i=0;
        int n = grid.size();
        int j=0;
        bool flag = true;
        int count = 0;
        int m = grid[0].size();
        
        
        
        i = 0;
        while(i<n){
            //cout<<i << endl;
            int j=0;
            int sum = 0;
            while(j<m){
                sum += sc[i][j];
                //cout<< sum << endl;
                if(sum<=k){
                    count++;
                    j++;
                }
                else{
                    break;
                }
            }
            i++;
        }
        return count;


    }
};
