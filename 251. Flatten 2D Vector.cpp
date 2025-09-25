class Vector2D {
public:
    queue<int>nn;
    Vector2D(vector<vector<int>>& vec) {
        for(auto x: vec){
            for(auto y:x){
                nn.push(y);
            }
        }
    }
    
    int next() {
        int v = nn.front();
        nn.pop();
        return v;
    }
    
    bool hasNext() {
        if(nn.empty())return false;
        return true;
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(vec);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
