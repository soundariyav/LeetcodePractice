class Solution {
public:
    bool isValid(string word) {
        int cc =0 ;
        set<char>v{'a','e','i','o','u'};
        int vc =0;
        int c=0;
        bool d = false;
        for(auto x: word){
            if(isalnum(x)){
                if(isalpha(x)){
                    char l = tolower(x);
                    if(v.find(l)!=v.end()){
                        vc++;
                    }
                    else{
                        cc++;
                    }
                }
                else{
                    d = true;
                }
            }
            else{
                return false;
            }
        }
        
        if(vc<1)return false;
        if(cc<1)return false;
        return word.size()>=3;
    }
};
