class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int t = 0; 
        int c=0;
        int cg=0;
        int s= 0;
        for(int i=0;i<n;i++)
        {
            t += gas[i];
            c += cost[i];

            cg += gas[i]-cost[i];
            if(cg<0)
            {
                s = i+1;
                cg = 0;
            }
        }
        return (t<c)?-1: s;
    }
};
