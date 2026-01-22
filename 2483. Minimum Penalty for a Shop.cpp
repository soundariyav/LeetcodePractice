class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int>o(n+1,0);
        vector<int>cl(n+1,0);
        for(int i=n-1;i>=0;i--){
        
            
            
            if(customers[i]=='Y'){        
                o[i] = o[i+1]+1;
            }
            else{
                o[i] = o[i+1];
            }
        }
       
        cl[0] = 0;
        for(int i=1;i<=n;i++){
            if(customers[i-1]=='N'){
                cl[i] = cl[i-1]+1;
            }
            else{
                
                cl[i] = cl[i-1];
            }
        }
        for(auto x: o){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x: cl){
            cout<<x<<" ";
        }
         int ans=0;
         int gs = 1e9;
        for(int i=0;i<=n;i++){
            int sum = o[i]+ cl[i];
            if(sum<gs){
                ans = i;
                gs = sum;
            }
        }
        return ans;
    }
};
