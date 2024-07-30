class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> s;
        vector<int>res;
        //iterate the vector and push each element one by one
        for(int i=0;i<prices.size()-1;i++)
        {
            int count =0;
            s.push(prices[i]);
            cout<< "step1 : " << prices[i] << endl;
            if(!s.empty())
            {
                int sum = s.top();
                cout<< "step2 : " << sum << endl;
                for(int j=i+1;j<prices.size();j++)
                {
                    if(sum>=prices[j])
                    {
                       res.push_back(sum - prices[j]);
                       int dis = sum-prices[j];
                       cout<< "Step3 : " << dis<< endl;
                       break;
                    }
                    if(j==prices.size()-1)
                    {
                        res.push_back(prices[i]);
                    }
                    
                    
                }
                    

                
            
    
            

            }

        }
        res.push_back(prices[n-1]);
    return res;
        
    }
};
