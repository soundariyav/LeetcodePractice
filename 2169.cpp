class Solution {
public:
    int countOperations(int x, int y) {
        int count=0;
        while(x!=0 && y!=0){
            
            if(x==y){
                count++;
                return count;
            }
            if(x>y){
                x = x-y;
            }
            else{
                y = y-x;
            }
            
            count++;
        }
        return count;
    }
};
