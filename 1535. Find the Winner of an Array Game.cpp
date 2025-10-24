class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int prev = 0;
        int count=0;
        int a = arr[0];
        int b = arr[1];
        int i=2;
        int size = arr.size();
        if(a<b){
            //b is winner
            prev = b;
            count =1;
            arr.push_back(a);
            a = b;
            
        }
        else{
            prev = a;
            count=1;
            arr.push_back(b);
        }
        if(k==count){
            return prev;
        }
        bool flag = false;
        while(flag==false && i<arr.size()){
             b = arr[i];
             auto [x,y]= helper(a,b);
             if(prev == x){
                 count++;
                 if(k==count){
                    return x;
                 }
                 if(count>size){
                    return prev;
                 }
                 arr.push_back(y);
             }
             else{
                prev = x;
                a= x;
                arr.push_back(y);
                count=1;
             }
             i++;

        }
        return {};
    }
    pair<int,int>helper(int a,int b){
        if(a<b){
            //b is winner
            int temp = a;
            a = b;
            b = a;
            
        }
        return {a,b};
    }
};
