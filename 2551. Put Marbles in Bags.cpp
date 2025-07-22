class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        // sum of the adjacent element
        vector<int>ps;
        int n = weights.size();
        for(int i=1;i<weights.size();i++){
            int s = weights[i]+weights[i-1];
            ps.push_back(s);
        }
        long long ans = 0;
        sort(ps.begin(),ps.end());
        for(int i=0;i<k-1;i++){
            ans+= ps[n-2-i]-ps[i];
        }
        return ans;
    }

    

    
}; 
