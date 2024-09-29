class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
    int n = nums.size();
       int minel = *min_element(nums.begin(),nums.end());
       int maxl = *max_element(nums.begin(),nums.end());
    vector<int>mine;
    vector<int>maxy;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==minel)
        {
        mine.push_back(i);
        }

    }
    int swap=0;
    sort(mine.begin(),mine.end());
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==maxl)
        {
            maxy.push_back(i);
        }
    }
    sort(maxy.rbegin(),maxy.rend());
    if(mine[0]>maxy[0])
    {
         swap = mine[0] + n-2-maxy[0];
        cout<<swap <<endl;
    }
    else
    {
         swap = mine[0]+ n-1-maxy[0];
        cout<<swap <<endl;
    }
        return swap;
    }
};
