class Solution {
public:
    int getSum(int a, int b) {
        return add(a,b);
    }
    int add(int a, int b){
        if(b==0){
            return a;
        }
        int carry = (a&b)<<1;
        return add(a^b,carry);
    }
};
