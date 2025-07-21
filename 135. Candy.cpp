class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>l(n,1);
        vector<int>r(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                l[i]= l[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                r[i] = r[i+1]+1;
            }
        }
        vector<int>c(n);
        for(int i=0;i<l.size();i++){
            c[i]= max(l[i],r[i]);
        }
        int sum = 0;
        for(auto x: c){
            sum+= x;
        }
        return sum;
    }
};
