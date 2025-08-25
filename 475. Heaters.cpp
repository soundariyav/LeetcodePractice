class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int res = 0;
        for(int h : houses) {
            auto it = lower_bound(heaters.begin(), heaters.end(), h);
            int dist1 = (it == heaters.end()) ? INT_MAX : abs(*it - h);
            int dist2 = (it == heaters.begin()) ? INT_MAX : abs(*(it-1) - h);
            res = max(res, min(dist1, dist2));
        }
    return res;
    }
};
