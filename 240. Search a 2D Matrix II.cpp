class Solution {
public:
    int t;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        t = target;
        int i=0;
        for(auto& x:matrix){
            bool ans = bs(x);
            if(ans){
                
                return true;
            }
           
        }
        return false;
        
    }
    bool bs(vector<int>&m){
        int l = 0;
        int h = m.size()-1;
        while(l<=h){
            int mid = (h+l)/2;
            if(m[mid]==t){
                return true;
            }
            if(m[mid]<t){
                l = mid+1;
            }
            if(m[mid]>t){
                h = mid-1;
            }
        }
        return false;
    }
};
