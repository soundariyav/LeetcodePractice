class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>ps(n,vector<int>(m,0));
       for(int j=0;j<matrix[0].size();j++){
            int sum = 0;
            for(int i=0;i<matrix.size();i++){
                if(matrix[i][j]=='0')sum=0;
                sum += (matrix[i][j]-'0');
                ps[i][j] = sum;
            }
       } 
       int ans=0;
       for(int i=0;i<n;i++){
            vector<int>r = ps[i];
            int rf = largestRectangleArea(r);
            ans = max(ans,rf);
       }
       return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        int n = heights.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty()) {
                    width = i; // from 0 to i-1
                } else {
                    width = i - st.top() - 1;
                }
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }

        while (!st.empty()) {
            int height = heights[st.top()];
            st.pop();
            int width;
            if (st.empty()) {
                width = n;
            } else {
                width = n - st.top() - 1;
            }
            maxArea = max(maxArea, height * width);
        }

        return maxArea;
    
    }
};
