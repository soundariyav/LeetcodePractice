class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        //value, element index, array index
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
                   greater<pair<int, pair<int, int>>>>
        pq;
        int mm=INT_MIN;
        int rs = 0;
        int re = 1e9;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i][0],{i,0}});
            mm = max(mm,nums[i][0]);
        }
        // 0 4 5
        while(pq.size()== nums.size()){
            auto [top,in] = pq.top();
            pq.pop();
            int e = mm;
            if(e-top< re-rs){
                re = e;
                rs = top;
            }
            else if(e-top== re-rs){
                if(top<rs){
                    rs = top;
                    re = e;
                }
            }
            int row = in.first;
            int c = in.second;
            if(nums[row].size()>c+1){
                pq.push({nums[row][c+1],{row,c+1}});
                mm = max(mm,nums[row][c+1]);
            }
        }
        return {rs,re};

    }
    
    


    
};
