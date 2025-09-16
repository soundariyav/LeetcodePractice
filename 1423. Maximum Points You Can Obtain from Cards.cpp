class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        vector<int>fc(k+1);
        int n = c.size();
        vector<int>re(k+1);
        fc[0]=0;
        re[0]=0;
        for(int i=0;i<k;i++){
            fc[i+1]= c[i]+fc[i];
            re[i+1]=c[n-i-1]+re[i];
        }
        int ms =0 ;
        for(int i=0;i<=k;i++){
            int sum = fc[i]+ re[k-i];
            ms = max(sum,ms);
        }
        return ms;
    }
};
