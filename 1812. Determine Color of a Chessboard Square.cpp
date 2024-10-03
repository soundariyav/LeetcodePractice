class Solution {
public:
    bool squareIsWhite(string c) {
        
        if((c[0]=='a')||(c[0]=='c')||(c[0]=='e')||(c[0]=='g'))
        {
            if(c[1]%2==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(c[1]%2==0)
            {
                return false;
            }
            else
            {
                return true;
            }

        }
    }
};
