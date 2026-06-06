class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    vector<int> triplet = { nums[i], nums[j], nums[k] };
                    bool found = false;
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        for (auto &x : result) {
                            if (x == triplet ) {
                                found = true;
                                break;
                            }
                        }

                        if (!found)
                            result.push_back({ nums[i], nums[j], nums[k] });
                        
                    }
                }
                    
            }

        } 
        return result;
    }
};
