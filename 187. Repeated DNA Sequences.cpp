class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string>seen,output;
        int n=s.size();
        for(int i=0;i<n-10+1;i++)
        {
            string tem = s.substr(i,10);
            if(seen.find(tem)!=seen.end())
            {
                output.insert(tem);
            }
            seen.insert(tem);
        }
        return vector<string>(output.begin(),output.end());
    }
};
