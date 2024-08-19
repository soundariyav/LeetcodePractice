class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        {
            return false;
        }
        while(n>1)
        {
            if((n>1) &&(n%2==0))
            {
                n=n/2;
                cout<<"step"<<endl;
            }
            if((n>1) && (n%3==0))
            {
                n=n/3;
            }
            if((n>1) && (n%5==0))
            {
                n=n/5;
            }
            if((n%2!=0)&&(n%3!=0)&&(n%5!=0))
            {
                break;
            }
        }
        cout<< n <<endl;
        if(n<=1)
        {
            return true;
        }
        else
        {
            return false;
        }
          
            

            
    }
};
