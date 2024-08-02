class Solution {
public:
    int countSeniors(vector<string>& details) {
         int count =0;
        for(int i =0;i<details.size();i++)
        {
           
            string s = details[i];
            int tens= s[11] - '0';
            cout<< tens << endl;
            int ones = s[12]-'0';
            cout<<ones<<endl;

            int age = tens * 10 +ones;
            cout<<age<<endl;
            if(age>60)
            {
               count = count +1;
               cout<<count<<endl;
            }
           
        }
         return count;
    }
};
