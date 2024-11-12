class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
       //sliding window concept
       // keep a window of k size
       int c=0;
       int p=0;
       int n=calories.size();
       for(int i=0;i<k;i++)
       {
            c= c + calories[i];
       } 
       if(c<lower)
            {
                
                p = p-1;
            }
            if(c>upper)
            {
               
                p = p+1;
            }
       if(k==n) return p;
       for(int j=k;j<calories.size();j++)
       {
            auto left = j-k;
            c = c - calories[left] + calories[j];
             if(c<lower)
            {
                
                p = p-1;
            }
            if(c>upper)
            {
                p = p+1;
            }
       }
       return p;
    }
};
