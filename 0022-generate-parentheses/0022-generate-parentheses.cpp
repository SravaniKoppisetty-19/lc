#include <vector>
#include <string>

class Solution {
public:
    void backtrack(std::vector<std::string>& result, std::string current, int openCount, int closeCount, int max) {
        // Base case: if the current string length equals 2 * n, we found a valid combination
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        // Add an open parenthesis if we haven't reached the max allowed ('n')
        if (openCount < max) {
            backtrack(result, current + "(", openCount + 1, closeCount, max);
        }

        // Add a close parenthesis if there are unmatched open parentheses
        if (closeCount < openCount) {
            backtrack(result, current + ")", openCount, closeCount + 1, max);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
};