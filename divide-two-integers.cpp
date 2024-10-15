class Solution {
public:
    int divide(int dividend, int divisor) {
        //
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        //////////////////////////////////
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Convert both numbers to positive
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        // Perform division using bit manipulation
        long long result = 0;
        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            absDividend -= temp;
            result += multiple;
        }

        // Apply the sign
        if (isNegative) {
            result = -result;
        }

        // Clamp the result to integer bounds
        return (result > INT_MAX) ? INT_MAX : (int)result;
    }
};
