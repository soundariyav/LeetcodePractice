class Solution {
public:
    int maxVowels(string s, int k) {
        set<char>st{'a','e','i','o','u'};
        int ans = 0;
        int lcount = 0;
        for(int i=0;i<k;i++){
            
            if(st.find(s[i])!=st.end()){
                lcount++;
            }
        }
        cout<<lcount<<endl;
        ans = max(ans,lcount);
        
        for(int i=k;i<s.size();i++){
            int l =i-k;
            cout<<l<<endl;
            if(st.find(s[l])!=st.end()){
                lcount--;
            }
            if(st.find(s[i])!=st.end()){
                lcount++;
            }
            ans = max(ans,lcount);
        }
        return ans;
    }
};
