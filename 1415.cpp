class Solution {
public:
    vector<char>ct;
    vector<string>ans;
    int n;
    string getHappyString(int n, int k) {
        this->n = n;
        ct = {'a','b','c'};
        dfs("");
        if(ans.size()<k){
            return "";
        }
        return ans[k-1];
        return {};
       // aba, abc, aca, acb, bac, bab, bca, bcb, cab,
    }
    void dfs(string cur){
        if(cur.size()==n){
            ans.push_back(cur);
            return;
        }
        for(auto x: ct){
            if(cur.empty()){
                cur.push_back(x);
                dfs(cur);
                cur.pop_back();
            }
            else{
                if(cur.back()==x){
                    continue;
                }
                else{
                    cur.push_back(x);
                    dfs(cur);
                    cur.pop_back();
                }
            }
        }
        

    }
};
