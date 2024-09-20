class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        cout<<n<<endl;
        int i = n-1;
        int count=0;
        bool word = false;
        for(int i=n-1;i>=0;i--)
        {
            auto a = s[i];
            cout<<a<<endl;
            if((!word)&& (isspace(s[i])))
            {
                word=false;
                cout<<"step1"<<endl;
            }
            else if(word && isspace(s[i]))
            {
                cout<<"step2"<<endl;
                return count;
            }
            else
            {
                cout<<"step3"<<endl;
                count++;
                word = true;
            }

        }
        return count;
    }

};
