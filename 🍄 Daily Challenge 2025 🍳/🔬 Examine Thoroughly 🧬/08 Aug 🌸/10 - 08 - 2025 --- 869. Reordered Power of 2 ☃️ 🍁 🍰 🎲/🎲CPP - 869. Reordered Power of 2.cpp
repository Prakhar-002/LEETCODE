//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 869

//? ⌚ Time complexity ➺ O(d log d) 👉🏻  d = Digits in n

//? 🧺 Space complexity ➺ O(d)

class Solution {
public:
      // Checks if n's digits can be rearranged to form a power of 2
      bool reorderedPowerOf2(int n) {
            // Helper function to count and sort digits of a number
            auto countDigits = [](int x) {
                  string s = to_string(x);
                  sort(s.begin(), s.end());
                  return s;
            };

            // Find the sorted digit string for the input number
            string target = countDigits(n);

            // Test all powers of 2 within int range (up to 2^30)
            for (int i = 0; i < 31; i++) {
                  if (countDigits(1 << i) == target) {
                        return true;
                  }
            }

            // No matching power of 2 found
            return false;
      }
};
