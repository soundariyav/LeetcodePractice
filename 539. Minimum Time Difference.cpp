class Solution {
public:
    int findMinDifference(vector<string>& t) {
        vector<int>minutes;
        for(int i=0;i<t.size();i++)
        {
            string time=t[i];
            int h = stoi(time.substr(0,2));
            int m = stoi(time.substr(3,2));
           // if(h==00& m==0)m=1440;
            
            int mins = h* 60;
            mins += m;
            cout<<mins<<endl;
            minutes.push_back(mins);
            cout<< h << " " << m <<endl;
        }
        sort(minutes.begin(),minutes.end());
        int ans=1e9;
        for(int i=1;i<minutes.size();i++)
        {
            int d = minutes[i]-minutes[i-1];
           // d = d%60;
            ans = min(ans,d);
        }
        int ld = 1440-minutes[minutes.size()-1]+minutes[0];
        ans = min(ans,ld);
        cout<<ans<<endl;
        return ans;
    }
};
