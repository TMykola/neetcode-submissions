#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> result;
        for (char curr : s) {
            if (curr == '(' || curr == '[' || curr == '{') result.push(curr);
            else {
                if (result.size() != 0) {
                    switch (curr) {
                        case ')':
                            if (result.top() != '(') return false;
                            else result.pop();
                            break;
                        case ']':
                            if (result.top() != '[') return false;
                            else result.pop();
                            break;
                        case '}':
                            if (result.top() != '{') return false;
                            else result.pop();
                            break;
                    }
                
                }
                else return false;
            }
        }
    return result.empty();
    }
};
