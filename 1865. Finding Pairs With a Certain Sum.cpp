class FindSumPairs {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    vector<int> nums1;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        for(int i=0;i<nums2.size();i++){
            mp[i] = nums2[i];
            mp1[nums2[i]]++;
        }
        for(auto x: nums1){
            mp2[x]++;
        }
    }
    
    void add(int index, int val) {
         int v = mp[index];
         mp[index]=v+val;
         mp1[v]--;
         if(mp1[v]==0){
            mp1.erase(v);
         }
         mp1[mp[index]]++;
         cout<<mp1[v]<< " and v is "<< v<< " and " << mp1[val]<< endl;
    }
    
    int count(int tot) {
        int ans=0;
        for(auto x: nums1){
            int d = tot - x;
            ans+= mp1[d];
        }
         return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
