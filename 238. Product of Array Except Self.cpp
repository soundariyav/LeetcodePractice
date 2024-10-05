class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pmul=1;
        int bmul =1;
        vector<int>pm;
        vector<int>bm;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                pm.push_back(pmul);
            }
            
            else
            {
            pmul = pmul* nums[i-1];
            pm.push_back(pmul);
            
            }
        }
        for(int j=nums.size()-1;j>=0;j--)
        {
            if(j==nums.size()-1)
            {
                bm.push_back(bmul);
            }
            else
            {
                bmul = bmul*nums[j+1];
                bm.push_back(bmul);
            }

        }
        /*for(const auto ch:pm)
        {
            cout<<ch<<endl;
        }
        for(const auto ch:bm)
        {
            cout<<ch<<endl;
        }*/
        reverse(bm.begin(),bm.end());
        vector<int>ans;
        for(int i=0;i<pm.size();i++)
        {
            int val = pm[i]*bm[i];
            ans.push_back(val);
        }
        return ans;
      
        
    }
};
