class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        string r;
        while(n!=0){
            char a = (n%2)+'0';
            r.push_back(a);
            n = n/2;
        }
        bool flag = true;
        for(auto x:r){
            if(x=='1' && flag == false){
                return false;
            }
            if(x=='1' && flag ==true){
                flag = false;
            }
        }
        return true;
    }
};
