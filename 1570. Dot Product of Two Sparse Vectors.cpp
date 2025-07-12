class SparseVector {
public:
    vector<int>a;
    SparseVector(vector<int> &nums) {
            a = nums;
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        int r=0;
        for(int i=0;i<a.size();i++)
        {
            r += a[i]*vec.a[i];
        }
        return r;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);
