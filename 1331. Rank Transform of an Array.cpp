class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s;
        int n = arr.size();
        vector<int>ans(n);
        map<int,int>m;
        for(auto x:arr)
        {
            s.insert(x);
        }
        int i=0;
        for(auto x: s)
        {
            cout<<x<<endl;
            m[x] = i+1;
            i++; 
        }
        for(int i=0;i<arr.size();i++)
        {
           ans[i] = m[arr[i]];
        }
        return ans;
        
    }
};
