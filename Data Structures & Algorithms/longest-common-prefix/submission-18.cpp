class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
    }
    else{
        string result = "";
        for (int i = 0; i < strs.size() - 1; i++) {
            for (int j = 0; j < strs[i].size(); j++) {
                char symbol = strs[0][j];

                if (i != strs.size() - 1) {
                    char next_symbol = strs[i + 1][j];
                    char last_symbol = strs[strs.size() - 1][j];

                    if (symbol == next_symbol && result[j] != symbol && symbol == last_symbol) {
                        result.push_back(symbol);
                    } else break;

                }
            }
        }
        return result;
    }
    }
};