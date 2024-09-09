struct CompareFrequency {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // Min-heap: smallest frequency at top
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> u_map;
        priority_queue<pair<int,int>,vector<pair<int,int>>,CompareFrequency>pq;

        // Count the frequency of each element
        for (int num : nums) {
            u_map[num]++;
        }

        // Min-heap to store the top k frequent elements  
        // Build the min-heap with the frequencies
        for (const auto& entry : u_map) {
            pq.push(entry);
            if (pq.size() > k) {
                pq.pop(); // Remove the least frequent element
            }
        }

        // Extract the elements from the min-heap
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().first);
            pq.pop();
        }

        return result;
    }
};
