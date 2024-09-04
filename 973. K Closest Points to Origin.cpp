class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float,int>>pq;

        int n =points.size();
        unordered_map<int,vector<int>>u_map;
        vector<vector<int>> dis(k, vector<int>(2));  
        for(int i=0;i<points.size();i++)
        {
            int sum = 0;
            int a = points[i][0];
            int b = points[i][1];
             sum = (a*a)+(b*b);
            //cout<< "sum is " << sum << endl;
            float root = sqrt(sum);
            cout<< "root s" << root << endl;
            //cout<< "i value is " << i << endl;
            /*vector<int> currv = u_map[root];
            currv.push_back(i);
            u_map[root] = currv;
            */
            if(pq.size()<k)
            {
                pq.push({root,i});
                cout<<"pushed sum is " <<root << endl;
            }
            

            else if(pq.size()>=k) 
            {
                cout<<"step3"<<endl;

                if(pq.top().first>root)
                {
                pq.pop();
                pq.push({root,i});
                cout<<"pushed sum is " <<root << endl;
                }
            }
        }
        cout<< pq.size()<< endl;
        int i =0;
        while((k>0)&&(!pq.empty()))
        {
          int p = pq.top().second;

          dis[i][0] = points[p][0];
          dis[i][1] = points[p][1];
          pq.pop();
          i++;
          k--;
        }
        
        
        
        return dis;

    }
};
