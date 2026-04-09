class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat1, int k) {
        vector<vector<int>>mat = mat1;
        if(k==mat[0].size())return true;
        for(int i=0;i<mat.size();i++){
            if(i%2!=0){
                mat[i] = rotate(mat[i],k);
                //print(mat[i]);
            }
            else{
                mat[i]= rotateleft(mat[i],k);
                //print(mat[i]);
            }

        }
        if(mat==mat1)return true;
        return false;
    }
    vector<int> rotate(vector<int>nums, int k) {
            k =  k % nums.size();
            int j = nums.size()-k;
            cout<<j<<endl;
            vector<int>c = nums;
            int ind = 0;
            for(int i=j;i<c.size();i++){
                nums[ind] = nums[i];
                ind++;
            }
            int i=0;
            while(ind<nums.size() && i<j){
                nums[ind] = c[i];
                i++;
                ind++;
            }
            print(nums);
            return nums;
    }
    vector<int> rotateleft(vector<int> nums, int k) {
            k =  k % nums.size();
            int j  = k;
            vector<int>c = nums;
            int ind = 0;
            for(int i=j;i<c.size();i++){
                nums[ind] = nums[i];
                ind++;
            }
            int i=0;
            while(ind<nums.size() && i<j){
                nums[ind] = c[i];
                i++;
                ind++;
            }
            return nums;
    }
    void print(vector<int>row){
        for(auto x: row){
            cout<<x<< " ";
        }
        cout<<endl;
    }
};
