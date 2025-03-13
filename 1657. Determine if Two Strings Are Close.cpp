class Solution {
public:
    bool closeStrings(string w, string w1) {
       if(w.size()!=w1.size())return false;
       string we= w;
       string wf = w1;
       sort(we.begin(),we.end());
       sort(wf.begin(),wf.end());
       if(we==wf)return true;
       vector<int>m(26,0);
       //multiset<int>s;
       set<char>s;
       map<char,int>mp1;
       for(auto x: w){
            s.insert(x);
       }
       for(auto x:w1){
        
            if(s.find(x)==s.end()){
                return false;
            }
       }
       
       vector<int>m1(26,0);
       for(int i=0;i<w.size();i++){
            int c = w[i]-'a';
            m[c]++;
       }
       for(int i=0;i<w1.size();i++){
            int c = w1[i]-'a';
            m1[c]++;
       }
       sort(m.begin(),m.end());
       sort(m1.begin(),m1.end());
       if(m==m1)return true;
       return false;
       
        
    }
};
