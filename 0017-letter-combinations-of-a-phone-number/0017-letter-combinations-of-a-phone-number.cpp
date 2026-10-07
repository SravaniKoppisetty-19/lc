#include <vector>
#include <string>

class Solution {
private:
    void backtrack(const std::string& digits, int index, std::string& current, 
                   const std::vector<std::string>& mapping, std::vector<std::string>& result) {
        // Base case: if current combination length matches digits length
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

        // Get characters corresponding to current digit
        std::string letters = mapping[digits[index] - '0'];

        for (char c : letters) {
            current.push_back(c);                 // Choose
            backtrack(digits, index + 1, current, mapping, result); // Explore
            current.pop_back();                  // Backtrack
        }
    }

public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};

        std::vector<std::string> result;
        std::string current = "";

        // Phone keypad map
        std::vector<std::string> mapping = {
            "",     "",     "abc",  "def", // 0, 1, 2, 3
            "ghi",  "jkl",  "mno",         // 4, 5, 6
            "pqrs", "tuv",  "wxyz"         // 7, 8, 9
        };

        backtrack(digits, 0, current, mapping, result);
        return result;
    }
};