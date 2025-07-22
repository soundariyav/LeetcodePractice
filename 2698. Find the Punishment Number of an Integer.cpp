class Solution {
public:
    int punishmentNumber(int n) {
        int p = 0;
        for(int i=1;i<=n;i++){
            int sq = i*i;
            string str = to_string(sq);
            vector<vector<int>>memo(str.size(),vector<int>(i+1,-1));
            if(findpart(0,0,str,i,memo)){
                p+= sq;
            }
        }
        return p;
    }
    bool findpart(int ci, int sum, string str, int target,vector<vector<int>>& memo){
        if(ci== str.size()){
            if(sum == target){
                return true;
            }
            else{
                return false;
            }
        }
        if(sum>target)return false;
        if(memo[ci][sum]!=-1)return memo[ci][sum];
        bool partition = false;
        for(int j= ci;j<str.size();j++){
            string r = str.substr(ci,j-ci+1);
            int v = stoi(r);
            partition = partition || findpart(j+1, sum+v,str,target,memo);
            if(partition)return true;
        }
        return memo[ci][sum]= partition;


    }
};
