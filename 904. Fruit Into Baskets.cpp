class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>mp;
        int left = 0;
        int ml=0;
        int i=0;
        for( i=0;i<fruits.size();i++){
           mp[fruits[i]]++;
           while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                        mp.erase(fruits[left]);
                }
               left++;
           }
           int cl  = i-left+1;
           ml = max(cl,ml);
        }
        return ml;
    }
};
