class Solution {
public:
    int passThePillow(int n, int time) {
    int d = 1;
    int t = 0;
    int start= 1;
    //t->1
    // 1->2->3
    while(t<time)
    {
        start += d;
        if(start==n)
        {
            d = -d;
            
        }
        if(start==1)
        {
            d=-d;
        }    
        t++;
         
    }
     return start;
    }
   

};
