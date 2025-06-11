class Solution {
public:
    int d;
    int c;
    vector<vector<int>>vis;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        c=color;
        vis =vector<vector<int>>(image.size(),vector<int>(image[0].size(),0));
        d = image[sr][sc];
        dfs(image,sr,sc);
        return image;
    }
    void dfs(vector<vector<int>>& image,int i, int j){
        if(i<0 || i>=image.size()|| j<0 || j>=image[0].size() || image[i][j]!=d || vis[i][j]!=0){
            return;
        }
        vis[i][j]=-1;
        image[i][j]=c;
        dfs(image,i-1,j);
        dfs(image,i+1,j);
        dfs(image,i,j-1);
        dfs(image,i,j+1);
        return;
    }
};
