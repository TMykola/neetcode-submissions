class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> result;
        vector <pair <int,int>> max_numbers;
        unordered_map <int, int> count;
        for (int i : nums) count[i]++;
        for (auto& [key, value] : count) max_numbers.push_back( {key, value} );
        sort(max_numbers.begin(), max_numbers.end(), [](auto& a, auto& b) {
            return a.second > b.second;
        });
        for (int i = 0; i < k; i++) {    
            result.push_back(max_numbers[i].first);
        }                
        return result;
    }
};

