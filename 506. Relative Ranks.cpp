class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq; //-->1
        vector<string>res; //-->1
        for(int i =0;i<score.size();i++) //nlogn
        {
            pq.push(score[i]);
        }
        unordered_map<int,int>u_map; //1
        int count =1;
        while(!pq.empty())//n
        {
            int a = pq.top();
            cout<<a << endl;
            cout<< "count is " << count << endl;
            u_map[a] = count;
            count++;
            pq.pop();

        }
        for(int i = 0;i<score.size();i++)n
        {
           auto c = u_map[score[i]];
           cout<< c << endl;
           if(c == 1)
           {
            res.push_back("Gold Medal");
           }
           else if(c==2)
           {
            res.push_back("Silver Medal");
           }
           else if(c==3)
           {
            res.push_back("Bronze Medal");
           }
           else
           {
            res.push_back(to_string(c));
           }
        }

        return res;
    }
};
