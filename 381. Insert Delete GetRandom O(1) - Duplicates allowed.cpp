class RandomizedCollection {
public:
    unordered_map<int,unordered_set<int>>mp;
    //unordered_map<int,unordered_set<int>>check;
    int ci=0;
    vector<int>arr;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)==mp.end()){
             arr.push_back(val);
             mp[val].insert(arr.size()-1);
             //print(arr);
             return true;
        }
        arr.push_back(val);
        mp[val].insert(arr.size()-1);
        //print(arr);
        return false;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()){
            return false;
        }
        auto it = mp[val].begin();
        int firstElement = *it;
        if(firstElement!=arr.size()-1){
            int size = arr.size();
            int le = arr.back();
            arr.pop_back();
            mp[val].erase(firstElement);
            if(mp[val].empty())mp.erase(val);
            mp[le].erase(size-1);
            mp[le].insert(firstElement);
            arr[firstElement]= le;
            //print(arr);
            return true;
        }
        else{
            mp[val].erase(firstElement);
            if(mp[val].empty())mp.erase(val);
            if(arr.size()==1){
                arr = vector<int>();
            }
            else{
                arr.pop_back();
            }
            //print(arr);
            return true;
        }  
    }
    void print(vector<int>arr){
        for(auto x: arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    int getRandom() {
        if(arr.size()==0)return{};
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
