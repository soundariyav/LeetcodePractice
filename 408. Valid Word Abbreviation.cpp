class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
       int l1=0;
       int l2=0;
       while(l2<abbr.size() && l1<word.size())
       {
            int num=0;
            bool start=false;
            while(isdigit(abbr[l2]))
            {
                if(!start && abbr[l2]=='0')return false;
                num = num*10+ (abbr[l2]-'0');
                l2++;
                start=true;

            }
            if(num==0)
            {
                if(word[l1]!=abbr[l2])return false;
                l1++;
                l2++;

            }
            else
            {
                l1+= num;
            }

       }
       return l1==word.size()&& l2==abbr.size();
        
    }
};
