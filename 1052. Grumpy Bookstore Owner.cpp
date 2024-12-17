class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int gs=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0)gs+= customers[i];
        }
        int sum=0;
        int ga = -1e9;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)sum+= customers[i];
        }
       
        gs+= sum;
       
        ga = max(ga,gs);
        //sum = 0 // gs = 10;
        for(int i=minutes;i<customers.size();i++)
        {
            
            int j=i-minutes; // j=0;
            cout<<" j is "<<j<<endl;
            if(grumpy[j]==1){
                sum = sum - customers[j];
               
                gs = gs - customers[j];
               
            }
            if(grumpy[i]==1)
            {
                sum = sum+customers[i];
                gs = gs+customers[i];
            }
            ga = max(gs,ga);
            
           
        }
        return ga;
    }
};
