//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

public class Solution {
      public String licenseKeyFormatting(String s, int k) {
            // Split string by dashes to remove existing separators
            String[] parts = s.split("-");

            // Join parts, reverse the cleaned string, and convert to uppercase
            String cleaned = new StringBuilder().append(String.join("", parts)).reverse().toString().toUpperCase();

            List<String> res = new ArrayList<>();

            int i = 0;
            // Extract groups of size k from reversed cleaned string
            while (i < cleaned.length()) {
                  res.add(cleaned.substring(i, Math.min(i + k, cleaned.length())));
                  i += k;
            }

            // Join groups with dashes and reverse back to original order
            return new StringBuilder(String.join("-", res)).reverse().toString();
      }
}
