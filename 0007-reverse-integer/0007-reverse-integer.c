#include <limits.h> // For INT_MAX and INT_MIN

int reverse(int x) {
    int reversed = 0;
    while (x != 0) {
        int r = x % 10;
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && r > 7)) {
            return 0;
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && r < -8)) {
            return 0;
        }
        reversed = reversed * 10 + r;
        x = x / 10;
    }
    return reversed;
}
