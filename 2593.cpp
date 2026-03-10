class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        long long score=0;
        while(!pq.empty()){
            if(st.find(pq.top().second)!=st.end()){
                pq.pop();
                continue;
            }
            else{
                auto a = pq.top();
                pq.pop();
                score+= a.first;
                st.insert(a.second);
                if(a.second-1>=0){
                    st.insert(a.second-1);
                }
                if(a.second+1<nums.size()){
                    st.insert(a.second+1);
                }
            }
            
        }
        return score;

    }
};
