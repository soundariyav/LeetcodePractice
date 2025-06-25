class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }// c - 2 a - 3 b - 2
        
        stack<char>st; // c
        vector<bool>se(26); 
        for(auto x:s){
            if(st.empty()){
                
                mp[x]--;
                st.push(x);
                int v = x-'a';
                se[v] = true;    
            }
            else if(se[x-'a']==true){
                mp[x]--;
                continue;
            }
            else if(st.top() >= x && mp[st.top()] > 0){
                while(!st.empty() && st.top()>=x && mp[st.top()]>=1){         
                    int v = st.top()-'a';
                    se[v]= false;
                    st.pop();
                }
                if(se[x-'a']== false){
                     st.push(x);
                    mp[x]--;
                    se[x-'a']= true;
                } 

            }
            else if(se[x-'a']==false){
                st.push(x);
                mp[x]--;
                se[x-'a']= true;
            }
        }
        
        
         string ans;
         while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};
