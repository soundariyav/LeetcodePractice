struct compare{
    bool operator()(const vector<int>& a, const vector<int>& b){
        if(a[0]!= b[0]){
            return a[0]<b[0];
        }
        return a[1]>b[1];
    }
};
class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        // if the pt is the upper left 
        int count=0;
        // then check for rectangle
        sort(points.begin(),points.end(),compare());
        // keep this point as upper left;
        for(int i=0;i<points.size();i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            for(int j=i+1;j<points.size();j++){
                 int x2 = points[j][0];
                 int y2 = points[j][1];
                 if (x2 < x1 || y2 > y1) continue;
                 bool flag = true;
                 for(int k=0;k<points.size();k++){
                    if(k == i || k == j) continue;
                     if((points[k][0]>=x1 && points[k][0]<=x2) && (y2<=points[k][1] && points[k][1]<=y1)){
                            flag = false;
                            break;
                     }
                 }
                 if(flag){
                    count++;
                 }
            }

        }
        
        return count;
    }
};
