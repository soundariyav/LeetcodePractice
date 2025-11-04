class Solution {
public:
    int longestMountain(vector<int>& arr) {
        vector<int>down(arr.size(),0);
        vector<int>up(arr.size(),0);
        int n = arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                down[i]=down[i+1]+1;
            }
        }
        int ma =0;
        for(int i=0;i<n;i++){
            if(i!=0 && arr[i]>arr[i-1]){
                up[i]=up[i-1]+1;
            }
            if(up[i] && down[i]){
                ma=max(ma, up[i]+down[i]+1);
            }
        }
        return ma;

    }
};
