class Solution {
public:
    int minFlips(string target) {
        int count=0;
        char prevno='0';
        for(int i=0;i<target.size();i++)
        {
            if(prevno!=target[i])
            {
                count++;
                prevno = target[i];
            }
        }
        return count;
    }
};
