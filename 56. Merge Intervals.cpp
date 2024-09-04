class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<int>a;
        vector<pair<int,int>> vec;
        if(intervals.size()==1)
        {
            return intervals;
        }
        for(int i =0;i<intervals.size();i++)
        {
            int s = intervals[i][0];
            int e = intervals[i][1];
            //cout<< i << endl;
            vec.push_back({s,e});     
        }
        sort(vec.begin(),vec.end());
        vector<vector<int>>ans;
        int s = vec[0].second;
        int f = vec[0].first;
        for(int i =0;i<vec.size()-1;i++)
        {
            vector<int>a(2);
            if(s>=vec[i+1].first)
            {
                s = max(s,vec[i+1].second);
                f = min(f,vec[i+1].first);
            }
            else
            {
              a[0]=f;
              a[1]=s;
              f = vec[i+1].first;
              s = vec[i+1].second;
              ans.push_back(a);

            }
            
        }
        int n =intervals.size();
        ans.push_back({f,s});
        return ans;


    return{};        
    }
};
