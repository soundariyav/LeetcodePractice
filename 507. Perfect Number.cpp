class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)return false;
        vector<int>d;
        for(int i=1;i<=sqrt(num);i++){
            if(num%i==0){
                int v = num/i;
                if(v!=num){
                    d.push_back(v);

                }
                d.push_back(i);
            }
        }
        int sum = accumulate(d.begin(),d.end(),0);
        return sum==num;
    }
};
