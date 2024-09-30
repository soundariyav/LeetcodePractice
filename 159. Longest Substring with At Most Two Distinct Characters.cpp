class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int n = s.length();
         int max_length =0;
         unordered_map<char,int>mymap;
         int left = 0;
         int count=0;
         for(int i = 0;i<n;i++)
         { 
            mymap[s[i]]++;
            while(mymap.size()>2)
            {
                mymap[s[left]]--;
               if(mymap[s[left]]==0)
               {
                    mymap.erase(s[left]);
                    
                }
                left++;
            }

                
            max_length=max(max_length,i-left+1);
         }
    return max_length;
        
    }
};
