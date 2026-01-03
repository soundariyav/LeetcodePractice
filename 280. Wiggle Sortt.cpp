class Solution {
public:
/*
6 6 5 6 3 8
3 5 6 6 6 8
3 8 5 6 6 6
*/
    void wiggleSort(vector<int>& n) {
        vector<int>nums = n;
        sort(nums.begin(),nums.end());
        int i=0;
        int j= nums.size()-1;
        int k = 0;
        int d = 0;
        while(k<nums.size() && j>=i){    
            if(d%2==0){
                n[k]= nums[i];
                i++;
            }
            else{
                n[k]= nums[j];
                j--;
            }
            k++;
            d++;
        }
    }
    



};
