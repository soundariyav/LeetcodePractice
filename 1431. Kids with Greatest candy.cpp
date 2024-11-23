class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int m = *max_element(candies.begin(),candies.end());
        cout<<m<<endl;
        int n=candies.size();
        vector<bool>ans(n,false);
        for(int i=0;i<n;i++)
        {
            if(candies[i]+e>=m)
            {
                ans[i]=true;
            }
        }
        return ans;
    }
};
