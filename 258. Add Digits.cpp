class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            num = helper(num);
        }
        return num;
    }
    int helper(int x){
        int sum = 0;
        while(x!=0){
            sum+= x%10;
            x = x/10;
        }
        return sum;
    }
};
