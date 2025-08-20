class Solution {
public:
    int rows;
    int cols;
    vector<vector<int>> matrix;
    int count=0;
    unordered_map<int,int>mp;
    int countSquares(vector<vector<int>>& matrix) {
        this->matrix= matrix;
         rows= matrix.size();
         cols= matrix[0].size();
        vector<vector<int>> memo(rows, vector<int>(cols, -1));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                dp(i,j,memo);
            }
        }
        for(auto [k,v]:mp){
            for(int i=1;i<k;i++){
                 mp[i]+= v;
            }
        }
        

       return count;
    }
    int dp(int i,int j,vector<vector<int>>&memo){
        if(i<0 || j<0 || i>=rows || j>=cols){
            return 0;
        }
        //cout<<"entered "<<i <<" and "<< j<<endl;
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        if(matrix[i][j]==1){
           int top= dp(i-1,j,memo);
           int left= dp(i,j-1,memo);
           int dia = dp(i-1,j-1,memo);
           memo[i][j]= 1+ min({top,left,dia});
           int v = memo[i][j];
           mp[v]++;
           
        }
        else{
            memo[i][j]=0;
        }
        count+= memo[i][j];
        return memo[i][j];
    }
};
