class Solution {
public:
    int bulbSwitch(int n) {

        vector<long long>sqr;
        for(int i=2;i<=10000;i++){
            long long a = i*i;
            sqr.push_back(a);
        }
        
        cout<<endl;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        if(n==3){
            return 1;
        }
        auto ind = upper_bound(sqr.begin(),sqr.end(),n);
       
            int count= (ind - sqr.begin());
            cout<< count<<endl;
            int total = n-1;
            total = total-count;
            return n-total;
        
    }
};
