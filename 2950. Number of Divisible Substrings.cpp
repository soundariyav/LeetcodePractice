class Solution {
public:
    unordered_map<char,int>m={
    {'a',1},{'b',1},{'c',2},{'d',2},{'e',2}, {'f',3},{'g',3}, {'h',3},{'i',4},
    {'j',4},{'k',4},{'l',5},{'m',5},{'n',5},{'o',6},{'p',6},{'q',6},{'r',7},
    {'s',7},{'t',7},{'u',8},{'v',8},{'w',8},{'x',9},{'y',9},{'z',9}
    };
    int count=0;
    int countDivisibleSubstrings(string word) {
        /* take all the substrings
        // helper to implement the thins 
          // we will take mapping from the map and both divide by its length
        if yes. then increase the global count */
        for(int i=0;i<word.size();i++){
            string s="";
            int sum=0;
            s+= word[i];
            sum = m[word[i]];
            count++;
            for(int j=i+1;j<word.size();j++)
            {
                s+= word[j];
                sum+= m[word[j]];
                int l = j-i+1;
                if(sum%l==0)count++;

            }


        }       
        return count;
          
    }
    
};
