class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int>st1;
        vector<int>c;
        set<int>st2;
        for(int i=0;i<B.size();i++){
            st1.insert(A[i]);
            st2.insert(B[i]);
            int val = helper(st1,st2);
            c.push_back(val);
        }
        return c;
    }
    int helper(set<int>st1,set<int>st2){
        int count=0;
        for(auto x:st1){
            if(st2.find(x)!=st2.end()){
                count++;
            }
        }
        return count;
    }
};
