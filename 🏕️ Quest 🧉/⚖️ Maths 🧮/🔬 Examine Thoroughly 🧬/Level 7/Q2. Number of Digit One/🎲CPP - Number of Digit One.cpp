//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int countDigitOne(int n) {
            int count = 0;  // Result counter
            long long i = 1; // Current digit place

            // Loop through each digit place
            while (i <= n) {
                  long long divider = i * 10;
                  count += (n / divider) * i;
                  count += std::min(std::max(n % divider - i + 1, 0LL), i);
                  i *= 10;
            }
            return count; // Result
      }
};
