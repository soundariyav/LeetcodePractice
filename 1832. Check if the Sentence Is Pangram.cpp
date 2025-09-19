class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>al(26,0);
        for(auto x: sentence){
            int i = x-'a';
            al[i]++;
        }
        for(auto x: al){
            if(x==0){
                return false;
            }
        }
        return true;
    }
};
