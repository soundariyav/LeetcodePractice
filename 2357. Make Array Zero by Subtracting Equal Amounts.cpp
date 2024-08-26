class Solution {
public:
    int minimumOperations(vector<int>& nums) {
    int res = sumval(nums);
    int count=0;
    
    while(res>0)
    {
    count++;
    int a = minelement(nums);
    cout<< "val" << a << endl;
    for(int i = 0;i<nums.size();i++)
    {
        if(nums[i]>0)
        {
        nums[i]=nums[i]-a;
        }
        cout<<nums[i]<<endl;
    }
    
    res = sumval(nums);    
    cout<< res << endl;
    }
    return count;
    }

    int minelement(vector<int> r)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i =0;i<r.size();i++)
        {
            pq.push(r[i]);
        }
        while(pq.top()==0)
        {
            pq.pop();
        }
        return pq.top();
    }
    int sumval(vector<int> ro)
    {
        int sum =0;
        for(int i = 0; i<ro.size();i++)
        {
            sum = sum+ro[i];
        }
        return sum;
    }
};
