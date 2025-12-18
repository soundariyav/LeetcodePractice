class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        for(auto x: nums){
            if(x>0){
                pos++;
            }
            else if(x<0){
                neg++;
            }
            else{
                cout<<x<<" "<<endl;
                return 0;
            }
        }
        if(neg%2==0){
            return 1;
        }
        return -1;
    }
   
};
