class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> stringMap;
        for(int i = 0; i<arr.size(); i++){
            string a = arr[i];
            stringMap[a]++;
        }
        
        for(int i = 0; i<arr.size(); i++){
            string a = arr[i];
            if(stringMap[a]==1) k--;
            if(!k) return a;
        }
        return "";
        
    }
};
