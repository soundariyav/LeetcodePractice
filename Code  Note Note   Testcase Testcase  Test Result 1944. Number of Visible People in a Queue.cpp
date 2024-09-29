class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        stack<int>s;
        int n=h.size();
        vector<int>ans(n,0);
        
        for(int i =h.size()-1;i>=0;i--)
        {
            int count=0;
            while(!s.empty()&&(h[i]>s.top()))
            {
                s.pop();
                count++;
            }
            if(!s.empty())
            {
                count++;
            }
            s.push(h[i]);
            ans[i]=count;
            

        }
     //   sort(ans.rbegin(),ans.rend());
        return ans;

    }
};
