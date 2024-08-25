class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size()-1;
        cout<< n << endl;
        while(k>0)
        {
            int x = nums[n];
            int index = n;
            for(int i = n-1;i>=0;i--)
            {
                cout << " the number to compare is "  <<endl;
                if(nums[i]<=x)
                {
                    x = nums[i];
                    cout<< x << "x is " << endl;
                    index = i;

                }
    
            }
            int a = x * multiplier;
            cout<< "a is. " << a <<endl;
           nums[index] = a;
           k--;
        }

        return nums;
    }
};
