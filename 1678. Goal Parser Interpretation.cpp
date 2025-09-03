class Solution {
public:
    string interpret(string c) {
        string ans;
        for(int i=0;i<c.size();i++){
               if(c[i]=='G'){
                    ans.push_back('G');
               }
               else if(c[i]=='(' && c[i+1] ==')'){
                    ans.push_back('o');
                    
               }
               else if(c[i]=='(' && c[i+1]=='a'){
                    ans+= "al";

               }

        }
        return ans;
    }
};
