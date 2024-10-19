class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<vector<int>>fin;
        sort(nums.begin(),nums.end());
        int s=nums[0][0];
        int f=nums[0][1];
        
        for(int i=1;i<nums.size();i++)
        {
            cout<<nums[i][0] << " " << nums[i][1] << endl;
            if(f>=nums[i][0])
            {
                s = min(s,nums[i][0]);
                f = max(f,nums[i][1]);
            }
            else
            {
                vector<int>res;
                res.push_back(s);
                res.push_back(f);
                for(const auto& ch: res)cout<<ch<<"";
                fin.push_back(res);
                f = nums[i][1];
                s = nums[i][0];
            }
            cout<<s << " " << " f" << f <<endl;
        }
        vector<int>res;
        res.push_back(s);
        res.push_back(f);
        for(const auto& ch: res)cout<<ch<<"";
        fin.push_back(res);
        cout<< fin.size() <<endl;
        int result=0;
        for(int i=0;i<fin.size();i++)
        {

            int sum = fin[i][1]-fin[i][0]+1;
            cout<<sum <<endl;
            result = result+sum;

        }
        return result;
    }
};
