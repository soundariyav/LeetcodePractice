class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>s1;
        vector<int>l(height.size());
        vector<int>r(height.size());
        stack<int>s2;
        for(int i=0;i<height.size()-1;i++)
        {
            if(s1.empty())
            {
                s1.push(height[i]);
                l[i]=0;
            }
            else
            {
                if(s1.top()<height[i])
                {
                    s1.push(height[i]);
                    l[i]=height[i];
                }
                else
                {
                    l[i]=s1.top();
                }
            }

        }
        for(int i=height.size()-1;i>=0;i--)
        {
            if(s2.empty())
            {
                s2.push(height[i]);
                r[i]=0;
            }
            else
            {
                if(s2.top()<height[i])
                {
                    s2.push(height[i]);
                    r[i]=height[i];
                }
                else
                {
                    r[i]=s2.top();
                }
            }

        }
        /*for(const auto x: l)
        {
            cout<<x << " ";

        }
        cout<<endl;
        for(const auto x: r)
        {
            cout<<x << " ";
        }*/
        int sum =0;
        for(int i=1;i<l.size()-1;i++)
        {
            int n = min(l[i],r[i]);
           // cout<<n<<endl;
            int dif = n-height[i];
           // cout<<"dif"<< dif <<endl;
            sum = sum + dif;
            cout<<sum<<endl;
        }
        
        return sum;
        
    }
};
