class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int total = 0;
        int prevValue = 0;

        // Iterate through the string from right to left
        for (int i = s.size() - 1; i >= 0; --i) {
            char currentChar = s[i];
            int currentValue = romanMap[currentChar];

            // If the current value is less than the previous value, we subtract it
            if (currentValue < prevValue) {
                total -= currentValue;
            } else {
                total += currentValue;
            }

            // Update previous value for next iteration
            prevValue = currentValue;
        }

        return total;
    }
};