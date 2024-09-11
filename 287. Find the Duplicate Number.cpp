class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //use Floyd's tortoise & Hare Algorithm
        int tor =nums[0];
        int hare = nums[0];
        do{
            tor = nums[tor];
            hare = nums[nums[hare]];
        }while(tor!=hare);

        // now find the entrance of the cycle
        tor = nums[0];
        while(tor!=hare)
        {
            tor =nums[tor];
            hare= nums[hare];
        }
        

       return hare; 
    }
};
