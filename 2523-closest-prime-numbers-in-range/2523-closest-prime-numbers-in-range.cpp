class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> prime(right + 1, true);

        if (right >= 0) prime[0] = false;
        if (right >= 1) prime[1] = false;

        for (int i = 2; i <= right / i; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    prime[j] = false;
                }
            }
        }

        int prev = -1;
        int p1 = -1, p2 = -1;
        int minDiff = INT_MAX;

        for (int i = left; i <= right; i++) {
            if (prime[i]) {
                if (prev != -1 && i - prev < minDiff) {
                    minDiff = i - prev;
                    p1 = prev;
                    p2 = i;
                }
                prev = i;
            }
        }

        return {p1, p2};
    }
};
