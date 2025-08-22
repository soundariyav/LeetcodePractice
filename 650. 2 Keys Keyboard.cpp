class Solution {
public:
    int n;
    unordered_map<int,unordered_map<int,int>>memo;
    int minSteps(int n) {
        if(n==1)return 0;
          this->n = n;
          int h= 1;
          int r = 1;
          return 1 + dp(h,r);
    }
    int dp(int h, int r){
        if(h==n){
            return 0;
        }
        if(h>n){
            return 1e9;
        }
        if(memo.find(h)!= memo.end() && memo[h].find(r)!= memo[h].end()){
            return memo[h][r];
        }
        
        int op1 = 2+ dp(h*2,h);
        // only paste
        int op2 = 1 + dp(h+r,r);
        return memo[h][r]= min(op1,op2);
    }
};
/*
int holding = 0;
int rem = 9;

if(rem==0) return 0;

if(copy){

    1+ (n-rem)
    return [][] = ans;
}
if(paste){
// option 1 
    rem = rem-hold;
    1+ (n-rem)
 // option 2 
     hold = n-rem;
     1+ (hold)

return [] [] = min(one,two)
*/
