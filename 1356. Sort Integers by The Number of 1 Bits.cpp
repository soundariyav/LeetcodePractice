struct MinHeapComparator {
    bool operator()(int a, int b) {
        return a > b; // Compare directly for min-heap
    }
};

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    unordered_map<int,vector<int>>mym;
    priority_queue<int,vector<int>,MinHeapComparator>p;
    for(int i=0;i<arr.size();i++)
    {
        bitset<32>bits(arr[i]);
        string s = bits.to_string();
        int sum = count(s.begin(),s.end(),'1');
        if(mym.find(sum)!=mym.end())
        {
            mym[sum].push_back(arr[i]);
            
        }
        else
        {
            mym[sum].push_back(arr[i]);
            p.push(sum);
        }
    }
    vector<int>ans;
    while(!p.empty())
    {
       int a= p.top();
       vector<int>v = mym[a];
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
        ans.push_back(v[i]);
       }
       p.pop();
    }
    return ans;
    }
};
