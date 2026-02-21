class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> list(cards.begin(), cards.end());
        return backtrack(list);
    }
    bool backtrack(vector<double>arr){
        if(arr.size()==1){
            if(abs(arr[0]-24)<=0.1){
                 return true;
            }
            return false;
        }
        
        for(int i=0;i<arr.size();i++){
            for(int j= i+1;j<arr.size();j++){
                vector<double>nr;
                 for(int k=0;k<arr.size();k++){
                     if(k!=i && k!=j){
                         nr.push_back(arr[k]);
                     }
                 }
                     vector<double>res = operation(arr[i],arr[j]);
                     for(auto x: res){
                            nr.push_back(x);
                            if(backtrack(nr)){
                                return true;
                            }
                            nr.pop_back();
                     }
                
            }
            
        }
        return false;

    }
    vector<double> operation(double& a, double& b){
         vector<double>ans;
         // 
         ans.push_back(a+b);
         ans.push_back(a-b);
         ans.push_back(b-a);
         ans.push_back(a*b);
         if(a){
            ans.push_back(b/a);
         }
         if(b){
            ans.push_back(a/b);
         }
         return ans;
    }
};
