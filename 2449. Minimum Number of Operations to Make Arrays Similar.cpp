class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        vector<int>ev;
        vector<int>od;
        for(auto x: nums){
            if(x%2==0){
                ev.push_back(x);
            }
            else{
                od.push_back(x);
            }
        }
        vector<int>ev1;
        vector<int>od1;
        for(auto x: target){
            if(x%2==0){
                ev1.push_back(x);
            }
            else{
                od1.push_back(x);
            }
        }
        long long count=0;
        for(int i=0;i<od.size();i++){
            if(od[i]<od1[i]){
                count+= (od1[i]-od[i])/2;
            }
        }
        for(int i=0;i<ev.size();i++){
            if(ev[i]<ev1[i]){
                count+= (ev1[i]-ev[i])/2;
            }
        }
        return count;
    }
};
