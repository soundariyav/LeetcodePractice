class Solution {
public:
    vector<int>parent;
    vector<int>size;
    int n;
    unordered_map<int,int>xmap;
    unordered_map<int,int>ymap;
    int maxActivated(vector<vector<int>>& points) {
        n = points.size();
        parent = vector<int>(n,1);
        iota(parent.begin(),parent.end(),0);
        size = vector<int>(n,1);
        for(int i=0;i<points.size();i++){
            if(xmap.count(points[i][0])){
                unite(i,xmap[points[i][0]]);
            }
            else{
                xmap[points[i][0]]=i;
            }
            if(ymap.count(points[i][1])){
                unite(i,ymap[points[i][1]]);
            }
            else{
                ymap[points[i][1]]=i;
            }
        }
        int m1=0;
        int m2 = 0;
        for(int i=0;i<n;i++){
            if(parent[i]==i){
                if(m1<size[i]){
                    m2 = m1;
                    m1 = size[i];
                    
                }
                else if(m2<size[i]){
                    m2 = size[i];
                }
            }
        }
        return m2+m1+1;
        
        
    }
    void unite(int i,int j){
        int r1 = find(i);
        int r2 = find(j);
        if(r1!= r2){
            if(size[r1]< size[r2]){
                swap(r1,r2);
            }
            parent[r2]= r1;
            size[r1]+= size[r2]; 
        }
    }
    int find(int i){
        if(parent[i]==i)
        {
            return i;
        }
        return parent[i]=find(parent[i]);
    }
};
