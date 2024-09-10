class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);

    // If needle is found, index will be greater than or equal to 0
    // If needle is not found, find() returns std::string::npos which is -1
    if (index != -1) {
        return index;
    } else {
        return -1; // needle not found
    }
        
    }
};
