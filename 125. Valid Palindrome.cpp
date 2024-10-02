class Solution {
public:
    bool isPalindrome(string s) {
        int n =s.size();
        string fil = s;
        int i=0;
        for(char &c: s)
        {
            if(isalnum(c))
            {
                c= tolower(static_cast<unsigned char>(c)); 
              fil[i] = c;   
              i++;
            }
            else
            {
                
            }
           
        }
        string copy=fil.substr(0,i);
        cout<<copy<<endl;
        string ans = copy;
        reverse(copy.begin(),copy.end());

        if(copy==ans)
        {
            return true;
        }

        
        //cout<<fil<<endl;
        return false;
    }
};
