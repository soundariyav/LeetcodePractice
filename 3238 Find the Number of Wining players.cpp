class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> p(11, vector<int>(11));
        int count =0;
        cout<< " im her 1"<< endl;
        for(int i = 0;i<pick.size();i++)
        {
            int pl = pick[i][0];
            int cl = pick[i][1];
            cout<< pl << cl ;
            p[pl][cl]++;
            
       
        }
         cout<< " im her 2"<< endl;
        for(int i = 0; i<p.size(); i++){
            for(int j = 0; j<p[i].size(); j++){
                if(p[i][j]>=i+1)
                {
                    count++;
                    break;
                }
            }
             cout<< " im her 3"<< endl;
         //   cout<<endl;
        }
        /*
        for(int i =0;i<p.size();i++)
        {
            
            if
            {
                count++;
            }
        }
        */
        return count;
    }
    
};
