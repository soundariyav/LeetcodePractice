class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1;
        map<int,int>m2;
        set<int>s;
        for(auto x:nums1)
        {
            s.insert(x);
            m1[x]++;
        }
        for(auto x: nums2)
        {
            
            m2[x]++;
        }
        vector<int>ans;
        for(auto [k,x]:m1)
        {
            int a = m2[k];
            cout<<a<<endl;
            int b = min(a,x);
            cout<< x <<endl;
            for(int i=0;i<b;i++)
            {
                ans.push_back(k);
            }
    
        }
        return ans;
    }
};
