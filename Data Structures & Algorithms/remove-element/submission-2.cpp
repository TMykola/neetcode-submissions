class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector <int> result;
        for (int i : nums) {
            if (i != val) result.push_back(i);
        }
        nums = result;
        return nums.size();
    }
};