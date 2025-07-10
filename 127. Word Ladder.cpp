class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        map<string,vector<string>>mp;
        for(auto x: wordList){
            for(int i=0;i<x.size();i++){
                string r = x;
                r[i] = '*';
                mp[r].push_back(x);
            }
        }
        unordered_set<string> visited;
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        visited.insert(beginWord);
        while(!q.empty()){
            string r = q.front().first;
            int level = q.front().second;
            //generate patterns
            for(int i=0;i<r.size();i++){
                string rt = r;
                rt[i]= '*';
                for(auto& str : mp[rt]){
                    if(str==endWord)return level+1;
                    if(visited.find(str)==visited.end()){
                        visited.insert(str);
                        q.push({str,level+1});
                    }
                }
            }
            q.pop();

        }
        return{};
    }
};
