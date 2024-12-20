class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            //binary search
            long long v = spells[i];
            int low=0;
            int mid=0;
            int high=potions.size()-1;
            while(low<=high)
            {
                mid = (low+high)/2;
               // cout<< "the low is "<<low << "and the high is "<< high <<endl;
                //cout<< "the mid s "<<mid<<endl;
                long long pro = v*potions[mid];
                if(pro>=success){
                   // cout<<"yes greater"<<endl;
                    high = mid-1;
                }
                if(pro<success)
                {
                    // cout<<"not greater"<<endl;
                    low=mid+1;
                }
            }
           
            int a = potions.size()-low;
            
            ans.push_back(a);
        }
        return ans;
    }
};
