class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ans = 0;
        int i = 0;
          for(int j=0;j<mat.size();j++){
                auto x = mat[j];
                int sum = accumulate(x.begin(),x.end(),0);
                if(ans<sum){
                    ans = sum;
                    i = j;
                }
            }
        return {i,ans};
    }
};
