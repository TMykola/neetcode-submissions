class Solution {
public:
    bool isPalindrome(string s) {
        string clearWord;
        for (char symb : s) {
            if (isalnum(symb)) clearWord.push_back(tolower(symb));
        }

        int left = 0;
        int right = clearWord.size() - 1;

        while (left < right) {
            if (clearWord[left] == clearWord[right]) {
                left++;
                right--;
            }
            else return false;    
        }
        return true;
    }
};


