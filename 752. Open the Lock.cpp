class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        set<string>d;
        for(auto x:deadends){
            d.insert(x);
        }
        if(d.find("0000")!=d.end())return -1;
        queue<pair<string,int>>q;
        q.push({"0000",0});
        while(!q.empty()){
            auto [st,count]= q.front();
            q.pop();
            if(st==target){
                return count;
            }
            vector<string>ans = children(st);
            for(auto x: ans){
                if(d.find(x)==d.end()){
                    d.insert(x);
                    q.push({x,count+1});
                }
            }

        }
        return -1;

    }
    vector<string> children(string r){
        vector<string>child;
        for(int i=0;i<r.size();i++){
             int v = r[i]-'0';
             int o = (v+1)%10;
             int t = (v-1+10)%10;
             char oc = o+'0';
             char tc = t+'0';
             string one = r;
             one[i]= oc;
             child.push_back(one);
             string two = r;
             two[i]= tc;
             child.push_back(two);
        }
        return child;
    }
};
