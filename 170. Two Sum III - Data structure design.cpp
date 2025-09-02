class TwoSum {
public:
   vector<int>mp;
    map<int,int>mp1;
    TwoSum() {
        
    }
    // 3 2 1 
    void add(int number) {
       mp.push_back(number);
       sort(mp.begin(),mp.end());
    }
    
    bool find(int value) {
        int l = 0;
        int r = mp.size()-1;
        while(l<r){
            int sum = mp[l]+mp[r];
            if(sum==value)return true;
            if(sum<value){
                l++;
            }
            if(sum>value){
                r--;
            }
        }
        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
