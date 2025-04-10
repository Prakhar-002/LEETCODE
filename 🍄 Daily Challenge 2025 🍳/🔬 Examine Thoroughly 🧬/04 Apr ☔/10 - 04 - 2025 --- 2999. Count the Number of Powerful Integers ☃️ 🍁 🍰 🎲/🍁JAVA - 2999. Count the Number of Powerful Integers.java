//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2999

//? ⌚ Time complexity ➺ O(log(n)) 👉🏻  n = finish

//? 🧺 Space complexity ➺ O(log(n))

class Solution {
      // Main method to count powerful integers in the range [start, finish]
      public long numberOfPowerfulInt(long start, long finish, int limit, String s) {

            // Convert start - 1 and finish to string for digit-wise processing
            String start_ = Long.toString(start - 1);
            String finish_ = Long.toString(finish);

            // Total = powerful numbers in [1, finish] - powerful numbers in [1, start - 1]
            return calculate(finish_, s, limit) - calculate(start_, s, limit);
      }

      // count how many powerful numbers ≤ x with suffix s and digits ≤ limit
      private long calculate(String x, String s, int limit) {

            // If the number x has fewer digits than s, it can't have s as a suffix
            if (x.length() < s.length()) {
                  return 0;
            }

            // If x has the same number of digits as s, compare them directly
            if (x.length() == s.length()) {
                  return x.compareTo(s) >= 0 ? 1 : 0;
            }

            // Extract the last digits of x (same length as s) to compare suffix later
            String suffix = x.substring(x.length() - s.length());

            long count = 0; // Initialize counter for valid numbers

            int preLen = x.length() - s.length(); // Number of digits before suffix

            // Iterate over the prefix digits (excluding suffix)
            for (int i = 0; i < preLen; i++) {

                  // Convert the current character to its integer value
                  int digit = x.charAt(i) - '0';

                  // If digit exceeds limit, all further digits can be anything in [0, limit]
                  if (limit < digit) {
                        count += (long) Math.pow(limit + 1, preLen - i); // Add all combinations
                        return count; // No need to continue
                  }

                  // Add combinations using current digit's value
                  count += (long) digit * (long) Math.pow(limit + 1, preLen - 1 - i);
            }

            // After processing the prefix, check if the suffix is ≥ s
            if (suffix.compareTo(s) >= 0) {
                  count++; // Include this number
            }

            return count; // Return total count of powerful numbers ≤ x
      }
}
