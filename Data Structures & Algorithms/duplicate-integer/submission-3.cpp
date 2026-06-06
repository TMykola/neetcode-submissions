#include <vector>
#include <iostream>

using std::vector;

class Solution {
public:
    bool hasDuplicate(vector <int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int n = i + 1; n < nums.size(); n++) {
                if (nums[i] == nums[n])
                    return true;
            }
        }
    return false;
    }
};