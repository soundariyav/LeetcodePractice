class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<int,int>>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push({i,1});
            }
            else{
                auto [ind,c]= st.top();
                if(s[i]==s[ind]){
                    c+=1;
                    if(c==k){
                        st.pop();
                    }
                    else{
                        st.pop();
                        st.push({i,c});
                    }
                }
                else{
                    st.push({i,1});
                }
            }
        }
        string ans;
        while(!st.empty()){
            auto [ind,c]= st.top();
            while(c!=0){
                ans.push_back(s[ind]);
                c--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
