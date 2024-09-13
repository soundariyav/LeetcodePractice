class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int>w1(27);
        vector<int>w2(27);
        for(int i =0;i<word1.size();i++)
        {
            auto a = word1[i];
            int a1 = a-'a';
           // cout<<"freq of " << a << "is" << a1 <<endl;
            w1[a1]++;
            auto b =word2[i];
            int a2 = b-'a';
            //cout<<"freq of " << b << "is" << a2 <<endl;
            w2[a2]++;
        }
        for(int i =0;i<w1.size();i++)
        {
            cout<< i << endl;
            cout<<"";
            cout<< "frequency of a letter in w1" << w1[i] << endl;
            cout<< "frequency of a letter in w2" << w2[i] << endl;
            int c = abs(w1[i]-w2[i]);
            if(c>3)
            {
                return false;
            }
        }
        return true;
    }
};
