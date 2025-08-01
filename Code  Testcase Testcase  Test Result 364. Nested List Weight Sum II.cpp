/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    vector<int>d;
    vector<int>num;
    vector<int>w;
    int depthSumInverse(vector<NestedInteger>& nestedList) {
        foo(nestedList,1);
        int me = * max_element(d.begin(),d.end());
        int sum=0;
        
        for(auto x: d){
            int val = me-(x)+1;
            w.push_back(val);
        }
        for(int i=0;i<w.size();i++){
            sum+= w[i]* num[i];
        }

        return sum;
    }
    void foo(vector<NestedInteger> ni,int dep){
        for(auto x: ni){
            if(x.isInteger()){
                int a = x.getInteger();
                num.push_back(a);
                d.push_back(dep);
            }
            else{
                foo(x.getList(),dep+1);
            }
        }
    }
     
};
