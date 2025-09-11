class Solution {
public:
    int size= 0;
    vector<int>p;
    vector<int>f;
    vector<vector<int>> dpMemo;
    int maximumProfit(vector<int>& p, vector<int>& f, int budget) {
      size = p.size();
      this->p = p;
      this->f = f;
      dpMemo.assign(size + 1, vector<int>(budget + 1, -1));
      return dp(0,budget);
    }
    int dp(int i,int rem){
        //cout<< i << endl;
        
        if(i>=size){
            return 0;
        }
        if (dpMemo[i][rem] != -1) return dpMemo[i][rem];
        // two choice;
        int profit = f[i]- p[i];
        int c1 = 0;
        if(rem>=p[i] && profit > 0){
            c1 = profit+ dp(i+1,rem-p[i]); 
        }
        int c2 = dp(i+1,rem);
        return dpMemo[i][rem]=max(c1,c2);
    }
};

