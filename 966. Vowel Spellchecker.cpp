class Solution {
public:
     unordered_set<string> w;
     vector<string>wordlist;
     unordered_map<string,string>dv;
     unordered_map<string,string>mp;
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        this->wordlist = wordlist;
        w.insert(wordlist.begin(),wordlist.end());
        vector<string>res;
        
        for(auto x: wordlist){
            string r = lower(x);
            string devowel= todev(r);
          if (mp.find(r) == mp.end()) mp[r] = x;
if (dv.find(devowel) == dv.end()) dv[devowel] = x;
        }
        for(auto x: queries){
            //cout<<"the query came "<< x<< endl;
            string r = lower(x);
            if(w.find(x)!=w.end()){
                res.push_back(x);
                continue;
            }
            string d = todev(r);
            if(mp.find(r)!=mp.end()){
                 res.push_back(mp[r]);
                 continue;
            }
            if(dv.find(d)!=dv.end()){
                res.push_back(dv[d]);
                continue;
            }
            else{
                res.push_back("");
            }

            
        }
        return res;
    }
    string todev(string x){
        for(auto& c: x){
         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                c = '#';
         }
        }
         return x;
    }
    string lower(string r){
        string ans;
        for(auto x:r){
            char c = tolower(x);
            ans.push_back(c);
        }
        return ans;
    }
};
