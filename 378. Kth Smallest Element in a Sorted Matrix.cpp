class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        set<pair<int,int>>vi;
        priority_queue<array<int, 3>, vector<array<int, 3>>,greater<array<int,3>>>pq;
        pq.push({matrix[0][0],0,0});
        int v = 0;
        while(!pq.empty() && k>0){
            v = pq.top()[0];
            
            int i = pq.top()[1];
            int j = pq.top()[2];
            pq.pop();
            vi.insert({i,j});
            if(vi.find({i+1,j})== vi.end() && i+1<matrix.size() && j<matrix[0].size()){
                pq.push({matrix[i+1][j],i+1,j});
                vi.insert({i+1,j});
            }
            if(vi.find({i,j+1})==vi.end() && i<matrix.size() && j+1<matrix[0].size()){
                pq.push({matrix[i][j+1],i,j+1});
                vi.insert({i,j+1});
            }
            k--;
        }

        return v;
    }
};
