class Solution {
public:
    unordered_map<int,int>mp;
    int n;
    int minTaps(int n, vector<int>& ranges) {
        vector<int> maxReach(n + 1);

        // Calculate the maximum reach for each tap
        for (int i = 0; i < ranges.size(); i++) {
            // Calculate the leftmost position the tap can reach
            int start = max(0, i - ranges[i]);
            // Calculate the rightmost position the tap can reach
            int end = min(n, i + ranges[i]);

            // Update the maximum reach for the leftmost position
            maxReach[start] = max(maxReach[start], end);
        }
        int taps=0;
        int ce = 0;
        int ne =0;
        for(int i=0;i<=n;i++){
            if(i>ne){
                return -1;
            }
            if(i>ce){
                taps++;
                ce = ne;
            }
            ne = max(maxReach[i],ne);
        }
        return taps;
    }
};
