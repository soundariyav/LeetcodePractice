class linked_list
{
    public:
    int key;
    int val;
    linked_list*next;
    linked_list(int key=-1,int val = -1, linked_list*next = nullptr) :key(key),val(val),next(next){};
};

class MyHashMap {
public:
    int arraysize=1000;
    vector<linked_list*>map;
    MyHashMap() {
        for(int i=0;i<arraysize;i++)
        {
            // this creates a vector of size 1000 each index have a linked list with key as -1 and value as -1 and the next pointer will be a nullptr
            map.push_back(new linked_list());

        }
    }
    int hash(int key)
    {
        return key%arraysize;
    }
    
    void put(int key, int value) {
        linked_list*curr = map[hash(key)];
        while(curr->next)
        {
            if(key==curr->next->key)
            {
                curr->next->val= value;
                return;
            }
            curr=curr->next;
        }
        linked_list* newNode = new linked_list(key,value);
        curr->next = newNode;
    }
    
    int get(int key) {
        linked_list*curr=map[hash(key)];
        while(curr->next)
        {
            if(key==curr->next->key)
            {
                return curr->next->val;
            }
            curr=curr->next;
        }
        return -1;
        
    }
    
    void remove(int key) {
       linked_list*curr=map[hash(key)];
       linked_list*prev = curr;
        while(curr)
        {
            if(key==curr->key)
            {
               
                prev->next= curr->next; 
            }
            prev=curr;
            curr=curr->next;
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
