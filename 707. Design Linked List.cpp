struct Node{
    int val;
    Node* next;
    Node(int d) : val(d), next(nullptr) {}
};
class MyLinkedList {
public:
    Node* head = new Node(-1);
    
    int size = 0;
    MyLinkedList() {
        
        size = 0;
    }
    
    int get(int index) {
        int i=0;
        if(index>=size){
            return -1;
        }
        //i/nt d  = size - index;
        Node* curr = head->next;
        while(curr!=nullptr){
            if(i==index){
                return curr->val;
            }
            curr = curr->next;
            i+= 1;

        }
        return {};
    }
    
    void addAtHead(int val) {
        if(head->next!=nullptr){
            Node* temp = head->next;
            Node* n = new Node(val);
            head->next = n;
            n-> next = temp;
        }
        else{
            Node* n = new Node(val);
            head->next = n;
        }
        size++;
        //print(head);
    }
    
    void addAtTail(int val) {
        Node*curr = head;
        
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        Node* n = new Node(val);
        curr->next = n;
        size++;
        //print(head);
    }
    
    void addAtIndex(int index, int val) {
         int i=0;
         if(index>size || index<0)return;
         Node* curr = head;
         while(curr!=nullptr){
                if(i==index){
                    Node* temp = curr->next;
                    Node* n = new Node(val);
                    curr->next = n;
                    n->next = temp;
                    break;
                }
                curr= curr->next;
                i+=1;
         }
         size++;
         //print(head);
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        
        Node* prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }
        
        Node* toDelete = prev->next;
        prev->next = toDelete->next;
        delete toDelete;
        size--;
        //print(head);
    }
    void print(Node* root){
        Node* curr = root;
        while(curr!=nullptr){
            cout<<curr->val<< " -> "; 
            curr= curr->next;
        }
        cout<<"the size for " << size << endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
