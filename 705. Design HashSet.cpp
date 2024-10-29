class MyHashSet {
public:
    vector<int>a;
    MyHashSet() {
        
    }
    
    void add(int key) {
      if(find(a.begin(),a.end(),key)==a.end())
      {
        a.push_back(key);
      }

    }
    
    void remove(int key) {
       auto it = find(a.begin(),a.end(),key);
       if(it!= a.end())
       {
          a.erase(it);
       }
    }
    
    bool contains(int key) {
        if(find(a.begin(),a.end(),key)==a.end())
        {
            return false;
        }
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
