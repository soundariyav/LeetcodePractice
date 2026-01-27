class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for (int& x : nums) {
            int res = -1;
            int d = 1;
            while ((x & d) != 0) {
                res = x - d;
                cout<< "res " << res<< endl;
                d <<= 1;
                cout<< "d "<<  d<< endl;
            }
            x = res;
        }
        return nums;
    }
};
