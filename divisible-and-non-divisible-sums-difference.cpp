class Solution {
public:
    int differenceOfSums(int n, int m) {
         int sumNonDivisible = 0;
        int sumDivisible = 0;
        
        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                sumDivisible += i; // Sum of numbers divisible by m
            } else {
                sumNonDivisible += i; // Sum of numbers not divisible by m
            }
        }
        
        return sumNonDivisible - sumDivisible; // Return the difference
    }
};