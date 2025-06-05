class Solution {
public:
    void reverseWords(vector<char>& s) {
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        while(i<s.size()){
            int start = i;
            while(i<s.size() && s[i]!=' '){
                i++;
            }
            j = i-1;
            while(start<j){
                swap(s[start],s[j]);
                start++;
                j--;
            }
            i++;
        }

    }
};
