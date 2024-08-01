class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        stack<int> stck;
        int count =0;
        for(int i =0;i<n;i++)
        {
            if(!stck.empty() && stck.top()>s[i])
            {
                stck.pop();
                count++;
            }
            else
            {
                stck.push(s[i]);
                //cout<< "the pushed stck element" << s[i] << endl;
            }

        }
        return count;
    }
};
