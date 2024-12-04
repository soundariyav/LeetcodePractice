class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int ans =0;
        int n=position.size();
        sort(position.begin(),position.end());
        int low = 1;
        int high = ceil(position[n-1]/(m-1.0));
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(canplace(mid,position,m))
            {
                ans= mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
    bool canplace(int mid,vector<int>position,int m)
    {
        int prev = position[0];
        int ballsp = 1;

        for(int i=1;i<position.size()&& ballsp<m;i++)
        {
            if(position[i]- prev>=mid)
            {
                prev= position[i];
                ballsp= ballsp+1;
            }

        }
        return ballsp==m;
    }
};
