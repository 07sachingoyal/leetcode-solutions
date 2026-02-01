class Solution {
private:
    long long convertToBaseN(int num, int n) {
        long long result = 0;
        long long multiplier = 1;
        while (num > 0) {
            int remainder = num % n;
            result += (remainder * multiplier);
            num /= n;
            multiplier *= 10;
        }
        return result;
    }

    long long reverse(long long n) {
        long long f = 0;
        while (n != 0) {
            f = (f * 10) + (n % 10);
            n /= 10;
        }
        return f;
    }

public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n - 2; i++) {
            long long baseNum = convertToBaseN(n, i);
            if (reverse(baseNum) != baseNum) {
                return false;
            }
        }
        return true;
    }
};