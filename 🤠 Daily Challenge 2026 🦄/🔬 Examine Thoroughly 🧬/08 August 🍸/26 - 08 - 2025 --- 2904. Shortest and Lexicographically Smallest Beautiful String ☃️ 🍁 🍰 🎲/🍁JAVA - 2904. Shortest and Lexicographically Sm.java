//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2904

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String shortestBeautifulSubstring(String s, int k) {
            int n = s.length();
            int l = 0;
            int ones = 0;
            String res = "";

            for (int r = 0; r < n; r++) {
                  // Count '1's in current window
                  if (s.charAt(r) == '1') {
                        ones++;
                  }

                  // Shrink window if count exceeds k or there are leading '0's
                  while (l <= r && (ones > k || s.charAt(l) == '0')) {
                        if (s.charAt(l) == '1') {
                              ones--;
                        }
                        l++;
                  }

                  // Process window when it contains exactly k '1's
                  if (ones == k) {
                        String temp = s.substring(l, r + 1);

                        // Update answer based on length and lexicographical order
                        if (res.isEmpty() ||
                              temp.length() < res.length() ||
                              (temp.length() == res.length() && temp.compareTo(res) < 0)) {
                              res = temp;
                        }
                  }
            }

            return res;
      }
}