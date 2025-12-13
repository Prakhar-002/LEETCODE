//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3606

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<String> validateCoupons(String[] code, String[] businessLine, boolean[] isActive) {
            /**
             * Validate coupons and return sorted list of valid coupon codes.
             * Valid if: active, valid business line, valid format (alphanumeric + _).
             * Sort by: business priority ascending, then lexicographical order.
             */

            // Business line priority mapping (lower = higher priority)
            // electronics(0) < grocery(1) < pharmacy(2) < restaurant(3)
            Map<String, Integer> priority = new HashMap<>();
            priority.put("electronics", 0); // Highest priority
            priority.put("grocery", 1);
            priority.put("pharmacy", 2);
            priority.put("restaurant", 3); // Lowest priority

            // List to store valid coupons as (priority, code) pairs
            List<Pair> valid = new ArrayList<>();

            // Filter coupons based on 3 validation criteria
            for (int i = 0; i < code.length; i++) {
                  // Criteria 1: Coupon must be active
                  // Criteria 2: businessLine must be in priority map
                  // Criteria 3: code format must be valid (non-empty, alphanumeric + _)
                  if (isActive[i] &&
                              priority.containsKey(businessLine[i]) &&
                              isValidCode(code[i])) {
                        // Store as (priority_value, coupon_code) pair for sorting
                        valid.add(new Pair(priority.get(businessLine[i]), code[i]));
                  }
            }

            // Sort by business priority (ascending), then by code lexicographically
            Collections.sort(valid, (a, b) -> {
                  // First compare priority (lower number = higher priority)
                  if (a.priority != b.priority) {
                        return a.priority - b.priority; // Ascending priority
                  }
                  // Same priority: compare codes alphabetically
                  return a.code.compareTo(b.code);
            });

            // Extract only coupon codes from sorted pairs
            List<String> result = new ArrayList<>();
            for (Pair p : valid) {
                  result.add(p.code);
            }

            return result;
      }

      /**
       * Validate coupon code format:
       * - Non-empty string
       * - Contains only alphanumeric characters (a-z, A-Z, 0-9) or underscore (_)
       */
      private boolean isValidCode(String s) {
            // Check non-empty
            if (s.length() == 0) {
                  return false;
            }

            // Check each character
            for (char c : s.toCharArray()) {
                  // Reject any character that's not alphanumeric or underscore
                  if (!Character.isLetterOrDigit(c) && c != '_') {
                        return false;
                  }
            }
            return true; // All characters valid
      }

      // Helper class to store (priority, code) pairs for sorting
      static class Pair {
            int priority; // Business line priority value
            String code; // Coupon code string

            Pair(int priority, String code) {
                  this.priority = priority;
                  this.code = code;
            }
      }
}
