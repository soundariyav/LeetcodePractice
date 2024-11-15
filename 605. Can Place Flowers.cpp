class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
        int count=0;
        if(fl.size()==1 &&fl[0]==0 && n==1)return true;
        // che
         if (fl.size() > 1 && fl[0] == 0 && fl[1] == 0) {
            fl[0] = 1; // Place a flower
            count++;
        }
        
        
        for(int i=1;i<fl.size()-1;i++)
        {

             if((fl[i-1]==0 && fl[i]==0)&& (fl[i+1]==0))
            {
                fl[i]=1;
                count++;
            }
            
        }
      
        if(fl.size()>1 && fl[fl.size()-2]==0 && fl[fl.size()-1]==0) 
        {
            fl[fl.size()-1]=1;
            count++;
        }

        
        if(count>=n)
        {
            return true;
        }
        return false;
    }
};
