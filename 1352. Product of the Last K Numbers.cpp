class ProductOfNumbers {
public:
    vector<int>st;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        st.push_back(num);
    }
    
    int getProduct(int k) {
        int mul = 1;
        int size = st.size();
        if(k<=size){
            int i=1;
            while(k>0){
                mul*= st[st.size()-i];
                i++;
                k--;
            }
        }
        return mul;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
