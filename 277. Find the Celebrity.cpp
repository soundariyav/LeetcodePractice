/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else{
                    if(knows(i,j)){
                        adj[i].push_back(j);
                    }
                }
            }
        }
        int ind = 0;
        int count = 0;
        for(auto int i=0;i<n;i++){
            if(adj[i].size()==0){
                ind = i;
                count++;
            }
        }
        if(count==1){
          for(int i=0;i<n;i++){
            if(i==ind){
                continue;
            }
            else{
                bool flag= false;
                for(auto x: adj[i]){
                    if(x==ind){
                        flag =true;
                    }
                }
                if(!flag)return -1;
            }
          }
           return ind;  
        }
        
        return -1;
    }
};

 


 
