class Solution {
public:
    unordered_map<int,int>mp;
    int lenLongestFibSubseq(vector<int>& arr) {
        unordered_set<int>n(arr.begin(),arr.end());
        int len=0;
        int maxle=0;
        for(int i=0;i<arr.size();i++){
            for(int prev= i+1;prev<arr.size();prev++){
                int prev_n= arr[prev];
                int cur = prev_n+ arr[i];
                len = 2;
                while(n.find(cur)!=n.end()){
                    int temp = cur;
                    cur+= prev_n;
                    prev_n = temp;
                    len++;
                }
                maxle= max(len,maxle);
            }

        }
        return maxle==2? 0 : maxle;
        
    }
};
