class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        map<int,vector<int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<items.size();i++)
        {
            mp[items[i][0]].push_back(items[i][1]);
        }
        int n =mp.size();
        cout<< n<<endl;
        int m = 1;
       // ans = vector<vector<int>>(n,vector<int>(m,0));
        for(auto [k,x]: mp)
        {
            vector<int>r = x;
            cout<<k<<endl;
            int sum=0;
            sort(r.rbegin(),r.rend());
            for(int i=0;i<5;i++)
            {
                sum += r[i];

            }
            sum = sum/5;
            vector<int>res;
            res.push_back(k);
            res.push_back(sum);
            ans.push_back(res);

        }
        return ans;
    }
};
