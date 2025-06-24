class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int size = nums.size();
        nums.insert(nums.end(),nums.begin(),nums.end());
        int n = nums.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                int ne = i; 
                int val = st.top(); 
                ans[val] = nums[i];
                st.pop();
                
            }
            st.push(i);
            cout<<i<<endl;
        }        
        
    while(!st.empty()){
        int val = st.top();
        ans[val] = -1;
        st.pop();
    }
    vector<int>res;
    for(int i=0;i<size;i++){
        res.push_back(ans[i]);
    }
     return res;
    }

   
};
