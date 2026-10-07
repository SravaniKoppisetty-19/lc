#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> currentPartition;
        backtrack(s, 0, currentPartition, result);
        return result;
    }

private:
    void backtrack(const string& s, int start, vector<string>& currentPartition, vector<vector<string>>& result) {
        // Base case: Reached the end of the string
        if (start == s.length()) {
            result.push_back(currentPartition);
            return;
        }

        // Try partitioning at every possible ending position
        for (int end = start; end < s.length(); ++end) {
            if (isPalindrome(s, start, end)) {
                // Choose
                currentPartition.push_back(s.substr(start, end - start + 1));
                
                // Explore
                backtrack(s, end + 1, currentPartition, result);
                
                // Backtrack (Un-choose)
                currentPartition.pop_back();
            }
        }
    }

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};