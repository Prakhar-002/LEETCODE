//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public String maskPII(String s) {
            // Check if input is an email address (contains '@')
            if (s.contains("@")) {
                  // Convert to lowercase for consistency
                  s = s.toLowerCase();
                  int atIndex = s.indexOf('@');
                  // Return masked email: first char + "*****" + last char before '@' + domain
                  // Example: "LeetCode@Email.com" -> "l*****e@email.com"
                  return s.charAt(0) + "*****" + s.substring(atIndex - 1);
            }

            // Handle phone number: extract digits only
            StringBuilder digits = new StringBuilder();
            for (char c : s.toCharArray()) {
                  if (Character.isDigit(c)) {
                        digits.append(c);
                  } 
            }

            // Get the last 10 digits as local number
            String local = digits.substring(Math.max(0, digits.length() - 10));
            int cc = digits.length() - 10; // country code length

            // Build country code prefix with '+' and asterisks if cc exists
            String prefix = cc > 0 ? "+" + "*".repeat(cc) + "-" : "";

            // Format final masked phone number "***-***-xxxx"
            return prefix + "***-***-" + local.substring(local.length() - 4);
      }
}
