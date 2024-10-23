class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map[256]={0};
        int map2[256]={0};
        for(int i=0;i<s.size();i++)
        {
            char c1= s[i];
            char c2 = t[i];
            if(map[c1]==0 && map2[c2]==0)
            {
                map[c1] = c2;
                map2[c2]= c1;

            }
            else if(!(map[c1]==c2 && map2[c2]==c1))
            {
                return false;
            }
           
        }
        return true;
        
    }
};
