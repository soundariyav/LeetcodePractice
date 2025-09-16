class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        for(auto x: nums){
            if(st.empty()){
                st.push(x);
            }
            else{
                while(!st.empty() && gcd(st.top(),x)>1){
                    int a = lcm(st.top(),x);
                    st.pop();
                    x = a;
                }
                st.push(x);
            
            }
        }
        vector<int>ans;
        while(!st.empty()){
             ans.push_back(st.top());
             st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
