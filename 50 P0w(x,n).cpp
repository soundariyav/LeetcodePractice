class Solution {
public:
    double myPow(double x, int n) {
        int num = abs(n);
        //cout<<num<<endl;
        double result= 1;
        while(num)
        {
            int mul  = num%2;
            num = num/2;
            if(mul==1)
            {
                result = result*x;
                x = x*x;
                cout<<result<<endl;
            }
            else
            {
                x = x*x;
            }
        }
        if(n<0)
        {
            return 1/result;
        }
       return result;
    }
};
