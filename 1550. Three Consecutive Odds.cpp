class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]%2!=0)
            {
                cout<<"tre"<<endl;
                count++;
                if(count==3)
                {
                    return true;
                }
            }
            else
            {
                count = 0;
            }
        }
        return false;
    }
};
