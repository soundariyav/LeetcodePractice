class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        unordered_map<int,int>mym;
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++)
        {
            mym[arr[i]]++;
        }
        for(const auto ch:mym)
        {
            p.push(ch.second);
        }
        int l=0;
        int count=0;
        while(!p.empty())
        {
            int va=p.top();
            cout<<va<<endl;
            count=count+va;
            if(count>k)
            {
                return p.size();
            }
            p.pop();
          
        }
        int si = p.size();
          
        return si;
        
    }
};
