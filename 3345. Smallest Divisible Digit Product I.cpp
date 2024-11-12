class Solution {
public:
    int smallestNumber(int n, int t) {
         int rem = 0;
         for(int i=n;i<=n+10;i++)
         {
             int v = mulNum(i);
             cout<<v<<endl;
             if(v%t==0)return i;
         }
         return 0;
        

    }
    int mulNum(int n)
    {
        int ans=1;
        while(n!=0)
        {
            
            cout<< n <<endl;
            int d = n%10;
            n=n/10;
              cout<< d<< " d is" <<endl;
             ans= d*ans;

        }
        return ans;
    }
};
