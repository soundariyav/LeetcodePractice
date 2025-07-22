class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]= i;
        }
        vector<int>ans;
        for(auto x: nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
