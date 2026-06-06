#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int right = heights.size() -1;
        int left = 0;
        while (left < right) {
            int width = right - left;
            int minHeight = min(heights[left], heights[right]);
            int area = width * minHeight;
            result = max(result, area);
            if (heights[left] < heights[right]) left++;
            else right--;

        }
        return result;


    }
};
