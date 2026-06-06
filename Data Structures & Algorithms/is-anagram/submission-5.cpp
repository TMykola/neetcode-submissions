#include <string>
using std::string;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() == t.size()) {
            int count[26] = {};

            for (int i = 0; i < s.size(); i++)
                count[s[i] - 'a']++;
            for (int n = 0; n < t.size(); n++)
                count[t[n] - 'a']--;

            for (int i = 0; i < 26; i++) {
                if (count[i] != 0)
                    return false;
            }
        }
        else 
            return false;

    return true;
    }
};





