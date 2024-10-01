class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>curr(26,0);
        vector<int>comm(26,0);
        string val =words[0];
        for(int i=0;i<val.size();i++)
        {
            int n=val[i]-'a';
            //cout<<n<<endl;
            comm[n]++;
        }
        for(int i=1;i<words.size();i++)
        {
            string one = words[i];
            for(int j=0;j<one.size();j++)
            {
                int n = one[j]-'a';
                curr[n]++;
            }
            for(int i=0;i<curr.size();i++)
            {
                if(curr[i]!=comm[i])
                {
                    comm[i]=min(curr[i],comm[i]);
                    cout<<comm[i]<<endl;
                }
            }
            curr.assign(curr.size(), 0);
            
        }
        vector<string>ans;
        for(int i=0;i<comm.size();i++)
        {
            if(comm[i]>0)
            {
                int time = comm[i];
                while(time!=0)
                {
                ans.push_back(string(1,'a'+i));  
                time--;
                } 
            }
           // 
        }
        return ans;
    }
};
