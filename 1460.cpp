class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int count = 0;
        int n =target.size();
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        
        
        for(int i = 0, j=0;i<n, j<n;i++ , j++)
        {
            
            if(target[i]==arr[j])
            {
                count = count+1;
                cout<< "yes" << count << endl;
                
            }
    
           
            //cout<< count << endl;

        }
        if(count == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
