class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            string s = to_string(i);
            if(helper(s,i)){
                ans.push_back(i);
            }
        }
        return ans;

    }
    bool helper(string s,int i){
        for(auto x: s){
            if(x=='0')return false;
            int d = x-'0';
            if(i%d!=0){
                return false;
            }
        }
        return true;
    }

};
