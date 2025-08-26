class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;
        map<int,vector<int>>mp;
         for(int i=0;i<dimensions.size();i++){
                int l = dimensions[i][0];
                int w = dimensions[i][1];
                double sum = (l*l + w*w);
                
                
                //cout<<r<<endl;
                if(ans<=sum){
                    ans = sum;
                    
                    mp[ans].push_back(i);
                }
         }
         auto d = mp[ans];
         int area = 0;
         for(auto x: d){
            int l = dimensions[x][0];
            int w = dimensions[x][1];
            int a = l*w;
            area = max(a,area);

         }
         return area;
    }
};
