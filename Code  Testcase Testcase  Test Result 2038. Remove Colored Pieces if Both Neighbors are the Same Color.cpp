class Solution {
public:
    bool winnerOfGame(string colors) {
        int Alice=0;
        int Bob =0;
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i-1]==colors[i]&& colors[i]==colors[i+1])
            {a
                if(colors[i]=='A')
                {
                    Alice++;
                }
                else
                {
                    Bob++;
                }
            }
        }
        return Alice-Bob>=1;
    }
};
