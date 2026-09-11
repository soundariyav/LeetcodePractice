class Solution {
public:
    string smallestPalindrome(string s) {
        //if(s.size()==1)return s;
        int size = s.size()/2;
        string r = s.substr(0,size);
        sort(r.begin(),r.end());
        string second = r;
        reverse(r.begin(),r.end());
        if(s.size()%2!=0){
            second+= s[size];
        }
        second+=r;
        return second;
        
    }
};
