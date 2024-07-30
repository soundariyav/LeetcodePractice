class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //int result = 0;
         int n = s.length();
         int max_length =0;
         unordered_set<int> charSet;
         int left = 0;
         for(int i = 0;i<n;i++)
         {
           
            while(charSet.find(s[i])!=0)
            {
               
                charSet.erase(s[left]);
                left++;
                
                
 
            }
            charSet.insert(s[i]);
            max_length=max(max_length,i-left+1);
         }
    return max_length;
    }
};
