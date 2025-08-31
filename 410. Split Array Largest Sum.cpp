class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int h = accumulate(nums.begin(),nums.end(),0);
        int ans = 1e9;
        int ma = *max_element(nums.begin(),nums.end());
        int l = ma;
        if(nums.size()==k){
            return *max_element(nums.begin(),nums.end());
        }
        while(l<=h){
            int m = l + (h-l)/2;
            cout<< l <<" & "<<h<< " & "<<m<< endl;
            int v = helper(m,nums,k);
            
            cout<<v<< " and " <<k << endl;
            if(v>k){
              
               l = m+1;
                cout<< "l is "<< l<<endl;
            }
            else{
                ans = min(ans,m);
                h = m-1;
            }
           
        }
        return ans;
    }
    int helper(int m, vector<int>&nums,int k){
        int count = 0;
        int sum = 0;
        
        for(auto x: nums){
            sum+= x;
            if(sum>m){
                count++;
                sum = x;
            }

        }
        count++;
        return count;
    }
};
