class Solution {
public:
    bool canTransform(string start, string end) {
        string s = start;
        string e = end;
        s.erase(remove(s.begin(), s.end(), 'X'), s.end());
        e.erase(remove(e.begin(), e.end(), 'X'), e.end());
        if(s!=e)return false;
        int t = 0;
        for(int i=0;i<start.size();i++){
            if(start[i]=='L'){
                while(end[t]!= 'L') t++;
                if(i<t++)return false;
                //t++;
            }
        }

        t = 0;
        for(int i=0;i<start.size();i++){
            if(start[i]=='R'){
                while(end[t]!= 'R') t++;
                if(i>t++)return false;
                
            }
        }
        return true;
    }
};
