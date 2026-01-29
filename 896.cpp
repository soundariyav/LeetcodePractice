class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(increase(nums) || decrease(nums)){
        return true;
        }
        return false;
    }
    bool increase(vector<int>n){
        stack<int>st;
        for(auto x: n){
            if(st.empty()){
                st.push(x);
            }
            else{
                if(st.top()>x){
                    return false;
                }
                else{
                    st.push(x);
                }
            }
        }
        return true;
    }
    bool decrease(vector<int>n){
        stack<int>st;
        for(auto x: n){
            if(st.empty()){
                st.push(x);
            }
            else{
                if(st.top()<x){
                    return false;
                }
                else{
                    st.push(x);
                }
            }
        }
        return true;
    }
};
