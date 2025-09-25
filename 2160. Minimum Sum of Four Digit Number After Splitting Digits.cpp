class Solution {
public:
    int minimumSum(int num) {
       string r = to_string(num);
       sort(r.begin(),r.end());
       string one;
       one.push_back(r[0]);
       one.push_back(r[3]);
       string t;
       t.push_back(r[1]);
       t.push_back(r[2]);
       int x = stoi(one);
       int y = stoi(t);
       return x+y;
    }
};
