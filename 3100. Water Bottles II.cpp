class Solution {
public:
    int ans = 0;
    int maxBottlesDrunk(int numBottles, int ne) {
         ans+= numBottles;
         int em = numBottles;
         int b = 0;
         bool flag =true;
         while(ne<=em){
            auto r = helper(em,ne,b);
            em = r.first;
            ne = r.second;
            //cout<<em << " and. " << ne<< endl;
            b=0;
         }
         return ans;
         
        
    }
    pair<int,int> helper(int &em, int &ne, int &b){
        while(ne<=em){
            b +=1;
            em -= ne;
            ne+= 1;
        }
        em+= b;
        ans+=b;
        return {em,ne};
    }
};
