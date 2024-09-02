class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<int>nu1 = value(num1);
        vector<int>nu2 = value(num2);
        vector<int>nu3 = value(num3);
        vector<int>key(4);
        key[0] = min({nu1[0],nu2[0],nu3[0]});
        key[1] = min({nu1[1],nu2[1],nu3[1]});
        key[2] = min({nu1[2],nu2[2],nu3[2]});
        key[3] = min({nu1[3],nu2[3],nu3[3]});
        for(const auto& num : key) cout<< num << " "; cout<<endl;
        int multiplier =1;
         int res =0;
        for(int i = key.size()-1;i>=0;i--)
        {
            int d = key[i]*multiplier;
            res = res + d;
            multiplier = multiplier * 10;
        }
        return res;
        

    }
    vector<int> value(int num)
    {
        vector<int> num4(4);
        int i =3;
        while(num>0)
        {
        int a = num%10;
        num4[i]= a;
         num = num/10;
         i--;
         
        }
        //for(const auto& num : num4) cout<< num << " "; cout<<endl;
        return num4;
    }

};
