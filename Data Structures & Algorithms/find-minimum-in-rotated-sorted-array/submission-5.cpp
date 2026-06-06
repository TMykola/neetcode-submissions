class Solution {
public:
    int findMin(vector<int>& nums) {
        auto left = 0;
        auto right = nums.size() - 1;

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] > nums[right]) left = mid + 1;
            if (nums[mid] <= nums[right]) right = mid;
        }
        if (left == right) return nums[left];
    }
};
