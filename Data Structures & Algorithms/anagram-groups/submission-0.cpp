#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

//Input: strs = ["act","pots","tops","cat","stop","hat"]
//Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (int i = 0; i < strs.size(); i++){
            string word = strs[i];
            string CopyWord = word;
            sort(CopyWord.begin(), CopyWord.end());
            groups[CopyWord].push_back(word); 
        }
    vector<vector<string>> result;
    unordered_map<string, vector<string>>::iterator it;
    for(it = groups.begin(); it != groups.end(); it ++){
        result.push_back(it->second);
        }
    return result;
    }
};
