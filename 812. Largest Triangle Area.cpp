class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for(int i=0;i<points.size();i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            for(int j=i+1;j<points.size();j++){
                int x2 = points[j][0];
                int y2 = points[j][1];
                for(int k=j+1;k<points.size();k++){
                    int x3 = points[k][0];
                    int y3 = points[k][1];
                    double v = helper(x1,x2,x3,y1,y2,y3);
                    res = max(res,v);
                    
                }
            }
        }
        return res;
    }
    double helper(int x1,int x2,int x3,int y1,int y2,int y3){
        //cout<<"first "<<endl;
        double ans = 0;
        double val = (x1*(y2-y3))+ (x2*(y3-y1))+ (x3*(y1-y2));
        ans = 0.5* abs(val);
        return ans;
    }
};
