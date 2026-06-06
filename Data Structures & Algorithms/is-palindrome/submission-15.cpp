class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        bool result = true;
        int n = 0;
        transform(s.begin(), s.end(), s.begin(),
            [](unsigned char c) { return tolower(c); });

        for (int i = 0; i < s.size(); i++) {
            char symb = s[i];
            if (isalnum(symb)) res.push_back(symb);
        }
        s = res;

        int k = s.size();
        for (int j = 0; j < s.size() / 2; j++) {
            if (s[j] != s[s.size() - 1 - j]) {
                return false;
            }

        }
        return true;

    }
};
