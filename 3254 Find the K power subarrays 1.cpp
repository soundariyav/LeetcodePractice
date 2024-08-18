class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int i =0;
        while(i+k<=nums.size())
        {      
            int val = res(nums,i,i+k);
            ans.push_back(val);
            i++;
        }
        return ans;
    }
    int res(vector<int> s,int start, int end)
    {
        stack<int>r;
        int j = start+1;
        r.push(s[start]);
        cout<<"start is " << start << endl;
        cout<<"end is. " << end << endl;
        while((!r.empty()) && (j<end))
        {
            //cout<<j << endl;
           int q = r.top();
           if(s[j]<=r.top())
           {
            return -1;
           }
           else
           {
            int diff = s[j]-q;
            cout<< diff << endl;
            if(diff == 1)
            {
            r.push(s[j]);
            }
            else
            {
                return -1;
            }
           }
           j++;
        }
        int p = r.top();
        return p;
    }
};
