class Solution {
public:
    vector<vector<int>> memo;  // Correct declaration of memo as a 2D vector
    int n;
    int m;
    vector<int> num;
    vector<int> mul;

    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n = nums.size();
        m = multipliers.size();
        
        // Initialize memo as a 2D vector of size m x m with default value -1
        memo = vector<vector<int>>(m, vector<int>(m, -1));

        num = nums;
        mul = multipliers;

        return dp(0, 0);  // Start from the first multiplier and the leftmost index
    }

    int dp(int i, int l) {
        if (i == m) return 0;  // Base case: when all multipliers have been used

        if (memo[i][l] != -1) return memo[i][l];  // Return if already computed
        
        int r = n - 1 - (i - l);  // Calculate the right index based on the current left index

        // Recurrence: either take the left element (l) or the right element (r)
        int score = max(num[l] * mul[i] + dp(i + 1, l + 1),  // Take from the left
                        num[r] * mul[i] + dp(i + 1, l));    // Take from the right

        memo[i][l] = score;  // Memoize the result for the state (i, l)
        return memo[i][l];   // Return the computed score
    }
};
