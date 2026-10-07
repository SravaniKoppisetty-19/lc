class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int layers = min(m, n) / 2;

        for (int l = 0; l < layers; l++) {
            vector<int> layer;

            int top = l, bottom = m - 1 - l;
            int left = l, right = n - 1 - l;

            // Collect elements counter-clockwise starting from top-left

            // 1. Top row (left to right)
            for (int j = left; j < right; j++) {
                layer.push_back(grid[top][j]);
            }
            // 2. Right column (top to bottom)
            for (int i = top; i < bottom; i++) {
                layer.push_back(grid[i][right]);
            }
            // 3. Bottom row (right to left)
            for (int j = right; j > left; j--) {
                layer.push_back(grid[bottom][j]);
            }
            // 4. Left column (bottom to top)
            for (int i = bottom; i > top; i--) {
                layer.push_back(grid[i][left]);
            }

            int sz = layer.size();
            int rot = k % sz;

            // Put rotated elements back into grid
            int idx = 0;

            for (int j = left; j < right; j++) {
                grid[top][j] = layer[(idx + rot) % sz];
                idx++;
            }
            for (int i = top; i < bottom; i++) {
                grid[i][right] = layer[(idx + rot) % sz];
                idx++;
            }
            for (int j = right; j > left; j--) {
                grid[bottom][j] = layer[(idx + rot) % sz];
                idx++;
            }
            for (int i = bottom; i > top; i--) {
                grid[i][left] = layer[(idx + rot) % sz];
                idx++;
            }
        }

        return grid;
    }
};