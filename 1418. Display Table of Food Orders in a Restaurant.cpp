class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string>s;
        map<int,map<string,int>>m;
        for(int i=0;i<orders.size();i++)
        {
            s.insert(orders[i][2]);
            m[stoi(orders[i][1])][orders[i][2]]++;

        }
        vector<vector<string>>ans;  
        int n= s.size();
        vector<string>col;
        col.push_back("Table");
        vector<string>food;
        for(const auto ch: s)
        {
            col.push_back(ch);

        }
        ans.push_back(col);
        for(const auto ch:col)
        {
            cout<<ch;
        }
        
        for( auto& [k,v]:m)
        {
            vector<string>row;
            
            string tableno = to_string(k);
            row.push_back(tableno);
            for(int i=1;i<col.size();i++)
            {
                int count = v[col[i]];
                
                row.push_back(to_string(count));
               
            }
            ans.push_back(row);

        }
        
        

        return ans;
    }
};
