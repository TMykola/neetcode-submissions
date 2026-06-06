class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int current = 0;

        while (current <= (word1.size() - 1 + word2.size() - 1)) {

            if (current < word1.size()) {
                result.push_back(word1[current]);
            }
            if (current < word2.size()) {
            result.push_back(word2[current]);
            }
            current++;
        }


        return result;
    }
};