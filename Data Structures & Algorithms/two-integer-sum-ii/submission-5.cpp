#include <iostream>
#include <vector>                   
                                                         // Ruslan lox <3
using namespace std;

/*Input: numbers = [1, 2, 3, 4], target = 3 */    //Output: [1, 2]

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> result;
        for (int i = 0; i < numbers.size(); i++) {
            for (int k = i + 1; k < numbers.size(); k++) {
                if (numbers[i] + numbers[k] == target) {
                    result.push_back(i + 1);
                    result.push_back(k + 1);
                    return result;
                }
            }
        }
    }
};
