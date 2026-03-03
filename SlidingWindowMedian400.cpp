class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>median;
        multiset<int>lo;
        multiset<int>hi;
        for(int i=0;i<nums.size();i++){
            if(i>=k){
                int l = i-k;
                if(nums[l]<= *lo.rbegin()){
                    lo.erase(lo.find(nums[l]));
                }
                else{
                   hi.erase(hi.find(nums[l]));
                }
            }
            // insert always at lo
            lo.insert(nums[i]);
            //balance 1
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));

            //balance check 2
            if(lo.size()< hi.size()){
                lo.insert(*hi.begin());
                hi.erase(hi.begin());
            }
            // to find median;
            if(i>=k-1){
                median.push_back(k&1 ? *lo.rbegin(): ((double)(*lo.rbegin())+ (double)(*hi.begin()))*0.5);

            }
        }
        return median;
    }
};
