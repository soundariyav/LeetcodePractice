class Solution {
public:
    string sortString(string s) {
        sort(s.begin(),s.end());
         string ans;
        while(s.size()!=0){
           
            ans.push_back(s[0]);
            set<int>st;
            st.insert(0);
            for(int i=1;i<s.size();i++){
                if(ans.back()<s[i]){
                    ans.push_back(s[i]);
                    st.insert(i);
                }
            }
            bool flag = true;
            for(int i=s.size()-1;i>=0;i--){
                if(st.find(i)==st.end() && flag){
                    ans.push_back(s[i]);
                    st.insert(i);
                    flag= false;
                }
                else if(st.find(i)==st.end()){
                    if(ans.back()>s[i]){
                        ans.push_back(s[i]);
                        st.insert(i);
                    }
                }
            }
            string r = s;
            s = "";
            for(int i=0;i<r.size();i++){
                if(st.find(i)==st.end()){
                    s.push_back(s[i]);
                }
            }

        }
        return ans;
        
    }
};
