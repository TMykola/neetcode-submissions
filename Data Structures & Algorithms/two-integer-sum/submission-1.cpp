#include <vector>
using std::vector;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int n = i + 1; n < nums.size(); n++) {
                if (target == nums[i] + nums[n]) {
                    vector<int>sol = {i, n};
                    return sol;
                }
            }

        }
    return {};
    }
};
