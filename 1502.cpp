class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int>st;
        int mi = *min_element(arr.begin(),arr.end());
        int ma = *max_element(arr.begin(),arr.end());
        if (ma - mi == 0) {
            return true;
        }
        if((ma-mi)%(n-1)!=0){
            return false;
        }
        int d = (ma-mi)/ (n-1);
        for(int i=0;i<arr.size();i++){
            if((arr[i]-mi)% d == 0){
                 st.insert(arr[i]);
            }
            else{
                return false;
            }
        }
        return st.size()==n;
    }
};
