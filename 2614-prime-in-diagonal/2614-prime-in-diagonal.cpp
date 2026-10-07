class Solution {
private:
    // Helper function to check if a number is prime in O(sqrt(n))
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxPrime = 0;

        for (int i = 0; i < n; i++) {
            // Primary diagonal element: nums[i][i]
            int val1 = nums[i][i];
            if (val1 > maxPrime && isPrime(val1)) {
                maxPrime = val1;
            }

            // Anti-diagonal element: nums[i][n - i - 1]
            int val2 = nums[i][n - i - 1];
            if (val2 > maxPrime && isPrime(val2)) {
                maxPrime = val2;
            }
        }

        return maxPrime;
    }
};