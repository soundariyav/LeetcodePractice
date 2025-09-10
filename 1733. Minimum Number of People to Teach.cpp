class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        // first find the friends who cant communicate
        // Then group them and find the language which is speaken most speaken and return
        unordered_set<int>st;

        for(auto f: friendships){
            unordered_map<int,int>cm;
            bool comm = false;
            for(auto l : languages[f[0]-1]){
                cm[l]++;
            }
            for(auto l:languages[f[1]-1]){
                if(cm.find(l)!=cm.end()){
                    comm = true;
                    break;
                }
            }
            if(!comm){
                st.insert(f[0]-1);
                st.insert(f[1]-1);
            }
        }
        vector<int>cnt(n+1,0);
        int maxc=0;
        for(auto x: st){
            for(auto l: languages[x]){
                cnt[l]++;
                maxc = max(maxc,cnt[l]);
            }
        }
        return st.size()-maxc;
        
    }

};
