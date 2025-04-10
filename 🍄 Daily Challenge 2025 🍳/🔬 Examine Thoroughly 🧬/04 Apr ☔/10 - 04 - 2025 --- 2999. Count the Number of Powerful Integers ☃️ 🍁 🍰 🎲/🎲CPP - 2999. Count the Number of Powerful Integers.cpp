//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2999

//? ⌚ Time complexity ➺ O(log(n)) 👉🏻  n = finish

//? 🧺 Space complexity ➺ O(log(n))

#include <string>
using namespace std;

class Solution {
public:
      // Main method to return the number of powerful integers between start and finish
      long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {

            // Convert (start - 1) and finish into string form for digit-wise comparison
            string start_ = to_string(start - 1);
            string finish_ = to_string(finish);

            // Return powerful numbers in range [1, finish] - [1, start - 1]
            return calculate(finish_, s, limit) - calculate(start_, s, limit);
      }

      // Helper function to count how many valid numbers ≤ x follow the rules
      long long calculate(string x, string s, int limit) {

            // If x has fewer digits than s, it can't have s as suffix → invalid
            if (x.length() < s.length()) {
                  return 0;
            }

            // If lengths are equal, directly compare if x >= s
            if (x.length() == s.length()) {
                  return x >= s ? 1 : 0;
            }

            // Get the suffix of x (last s.length() digits)
            string suffix = x.substr(x.length() - s.length(), s.length());

            long long count = 0;           // Count of valid numbers
            int preLen = x.length() - s.length();  // Length of prefix (excluding suffix)

            // Iterate through the prefix part (before suffix)
            for (int i = 0; i < preLen; i++) {

                  // Convert current digit to integer
                  int digit = x[i] - '0';

                  // If digit > limit, all digits from here can be anything in [0, limit]
                  if (limit < digit) {
                        count += (long long)pow(limit + 1, preLen - i); // All combinations
                        return count;  // No need to process further digits
                  }

                  // Add combinations: digit * (limit+1)^(remaining places)
                  count += (long long)(digit) * (long long)pow(limit + 1, preLen - 1 - i);
            }

            // After prefix, check if suffix ≥ s (so entire number is valid)
            if (suffix >= s) {
                  count++;  // Include this number
            }

            return count;  // Return total count of valid numbers ≤ x
      }
};
