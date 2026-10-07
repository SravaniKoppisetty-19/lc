#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
private:
    int m, n;
    
    bool dfs(std::vector<std::vector<char>>& board, const std::string& word, int r, int c, int index) {
        // Base case: successfully matched all characters in the word
        if (index == word.length()) return true;
        
        // Boundary checks and character match check
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[index]) {
            return false;
        }
        
        // Mark cell as visited by modifying it in-place
        char temp = board[r][c];
        board[r][c] = '#';
        
        // Explore all 4 cardinal directions (Up, Down, Left, Right)
        bool found = dfs(board, word, r + 1, c, index + 1) ||
                     dfs(board, word, r - 1, c, index + 1) ||
                     dfs(board, word, r, c + 1, index + 1) ||
                     dfs(board, word, r, c - 1, index + 1);
        
        // Backtrack: restore the cell's original character
        board[r][c] = temp;
        
        return found;
    }

public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        m = board.size();
        n = board[0].size();
        
        // Pruning 1: Board must have at least as many characters as word length
        if (m * n < word.length()) return false;
        
        // Pruning 2: Frequency check
        std::unordered_map<char, int> boardFreq;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                boardFreq[board[i][j]]++;
            }
        }
        
        std::unordered_map<char, int> wordFreq;
        for (char ch : word) {
            wordFreq[ch]++;
            if (wordFreq[ch] > boardFreq[ch]) return false; // Early exit if board lacks required characters
        }
        
        // Pruning 3: Reverse word if start character is more frequent than end character
        // Reduces branch factor early when target word contains repetitive prefix characters
        if (boardFreq[word.front()] > boardFreq[word.back()]) {
            std::reverse(word.begin(), word.end());
        }
        
        // Try starting DFS from every cell matching the target first character
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0)) return true;
                }
            }
        }
        
        return false;
    }
};