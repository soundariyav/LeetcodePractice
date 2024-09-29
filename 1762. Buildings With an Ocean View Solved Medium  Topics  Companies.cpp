class Solution {
public:
    vector<int> findBuildings(vector<int>& h) {
        stack<pair<int,int>>s;
        vector<int>ans;
        for(int i =h.size()-1;i>=0;i--)
        {
            if(s.empty())
            {
                s.push({h[i],i});
            }
            else
            {
                int a = s.top().first;
                if(h[i]>a)
                {
                    s.push({h[i],i});
                }
               
            }
          
            
        }
        while(!s.empty())
        {
            int b= s.top().second;
            ans.push_back(b);
            s.pop();
        }
        return ans;

    }
};
