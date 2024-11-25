class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        vector<int>c1;
        for(auto x: nums1)s1.insert(x);
        for(auto x: nums2) 
        {
            if(s1.find(x)==s1.end())
            {
                c1.push_back(x);
                s1.insert(x);
            }
        }
        set<int>s2;
        vector<int>c2;
        for(auto x: nums2)s2.insert(x);
        for(auto x: nums1) 
        {
            if(s2.find(x)==s2.end())
            {
                c2.push_back(x);
                s2.insert(x);
            }
        }
        vector<vector<int>>ans;
        ans.push_back(c2);
        ans.push_back(c1);
       
        return ans;

        
    }
};
