/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    int i=0;
    queue<int>list;
    NestedIterator(vector<NestedInteger> &nestedList) {
         helper(nestedList);
         
    
    }
    void helper(vector<NestedInteger> nl){
        for(auto x: nl){
            if(x.isInteger()){
                int v = x.getInteger();
                list.push(v);
            }
            else{
                auto r = x.getList();
                helper(r);
            }

        }
    }
    int next() {
        int v= list.front();
        list.pop();
        return v;
    }
    
    bool hasNext() {
        if(list.empty())return false;
        return true;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
