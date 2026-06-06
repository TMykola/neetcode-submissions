class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        char prev;

        while (left <= right) {
            prev = s[left];
            s[left] = s[right];
            s[right] = prev;
            left++;
            right--;
        }
    }

};