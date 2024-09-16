class Solution {
public:
    int minOperations(string s) {
        int counter1 = 0;
        int counter2 =0;
        for(int i =0;i<s.size();i++)
        {
            if(i%2==0)
            {
                // Check if the first character is '0'
                if(s[i]!='0')
                {
                    counter1++;
                }
                if(s[i]!='1')
                {
                    counter2++;
                }
                            
            }
            else
            {
                if(s[i]!='0')
                {
                    counter2++;
                }
                if(s[i]!='1')
                {
                    counter1++;
                }

            }
        }
        return min(counter1,counter2);
    }
};
