class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>s;
        for(int i=0;i<nums1.size();i++)
        {
            s[nums1[i]]++;
        }
        vector<int>ans;
        unordered_set<int>s1;
        for(int i=0;i<nums2.size();i++)
        {
            if(s1.find(nums2[i])==s1.end())
            {
                s1.insert(nums2[i]);
                if(s.find(nums2[i])!=s.end())
                {
                    ans.push_back(nums2[i]);
                }
            }
        }
        return ans;
    }
};
