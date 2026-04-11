class Solution {
public:
    int maxDistance(vector<string>& words) {
        int ans=0;
         for(int i=words.size()-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(words[i]!=words[j]){
                    ans = max(ans,i-j+1);
                    break;
                }
            }
         }
         return ans;
    }
};
