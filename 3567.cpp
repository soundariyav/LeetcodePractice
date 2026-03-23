class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>res(m-k+1,vector<int>(n-k+1,0));
        for(int i=0;i+k<=grid.size();i++){
            for(int j=0;j+k<=grid[0].size();j++){
                vector<int>st;
                for(int x = i;x<i+k;x++){
                    for(int y = j;y<j+k;y++){
                        st.push_back(grid[x][y]);
                    }
                }
                int mn = INT_MAX;
                sort(st.begin(),st.end());
                for(int i=1;i<st.size();i++){
                    if(st[i]==st[i-1]){
                        continue;
                    }
                    else{
                        int d = st[i]- st[i-1];
                        mn = min(mn, d);
                    }
                }
                if(mn!=INT_MAX){
                    res[i][j]= mn;
                }
            }
        }
        return res;
    }
};
