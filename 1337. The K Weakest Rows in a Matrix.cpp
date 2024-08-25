class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>res;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<mat.size();i++)
        {
            int count = 0;
            for(int j=0;j<mat[0].size();j++)
            {
                count = count+mat[i][j];

            }
            /*
            pair<int, int> p = make_pair(count, i);
            pq.push(p);
            */

            /*
            auto p = make_pair(count, i);
            pq.push(p);
            */

            pq.push({count,i});
        }
        while(k>0)
        {
           auto a = pq.top();
           
           auto row = a.second;
           pq.pop();
           res.push_back(row);
           k--;
        }
        return res;
    }
};
