class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int maxArea = 0;
        int n = heights.size();
        
        for (int i = 0; i <= n; ) {
            if (s.empty() || (i < n && heights[s.top()] <= heights[i])) {
                s.push(i++);
            } else {
                int height = heights[s.top()];
                s.pop();
                int width = s.empty() ? i : i - 1 - s.top();
                maxArea = max(maxArea, height * width);
            }
        }
        
        return maxArea;
    
    }
};
