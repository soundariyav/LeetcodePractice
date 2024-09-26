class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>u_map;
        for(int i=0;i<nums.size();i++)
        {
                u_map[nums[i]].push_back(i);
        }
        for(const auto& ch :u_map)
        {
            int a = ch.first;
            cout<<a<<endl;
            if(ch.second.size()>1)
            {
                vector<int>vec=ch.second;
                for (int i=0;i<vec.size()-1;i++) 
                {
                    cout<<vec[i]<<endl;
                    
                    if(abs(vec[i]-vec[i+1])<=k)
                    {
                        
                        return true;
                    }
                    
                }
            }
        }
        
        return false;
        
        return{};
    }
};
