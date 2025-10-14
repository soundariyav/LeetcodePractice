class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
         int count = 2*k;
         vector<int>a;
         for(int i=0;i<=nums.size()-k;i++){
             stack<int>st;
             bool flag = true;
             for(int j=i;j<i+k;j++){
                if(st.empty()){
                    st.push(nums[j]);
                }
                else if(st.top()<nums[j]){
                    st.push(nums[j]);
                }
                else{
                     flag = false;
                     break;
                }

             }
             if(flag){
                a.push_back(i);
             }
         }
         unordered_set<int>s;
         for(auto x: a){
            if(s.find(x-k)!= s.end()){
                return true;
            }
            s.insert(x);
         }

         return false;
    }
  
};
