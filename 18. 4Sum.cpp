class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        int n = nums.size();
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int left = j + 1;
                int r = n - 1;

                while (left < r) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[r];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[r]});
                        left++;
                        r--;

                        while (left < r && nums[left] == nums[left - 1]) left++;
                        while (left < r && nums[r] == nums[r + 1]) r--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
