class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat[0].size();
        int res=0;
        vector<int>h(n,0);
        for(auto row: mat){
            for(int i=0;i<n;i++){
                h[i]= (row[i]==0)?0 : h[i]+1;
            }
            stack<vector<int>>st;
            st.push({-1,0,-1});
            for(int i=0;i<n;i++){
                int height = h[i];
                while(st.top()[2]>=height){
                    st.pop();
                }
                int j = st.top()[0];
                int prev= st.top()[1];
                int cur = prev + (i-j)*height;
                st.push({i,cur,height});
                res+= cur;
            }
        }
        return res;
    }
};
