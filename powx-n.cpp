class Solution {
public:
    double myPow(double x, int n) {
       double result = 1.0;
    long long power = n; // Convert int to long long to handle edge case with n = INT_MIN
    
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }
    
    while (power > 0) {
        if (power % 2 == 1) {
            result *= x;
        }
        x *= x;
        power /= 2;
    }
    
    return result;
  
    }
};