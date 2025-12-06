//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.5 Q2

//? ⌚ Time complexity ➺ O(m^n * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class Solution {
      // Check if substring s[start : start+length] is a valid IP segment (0–255, no
      // leading zero unless "0")
      private boolean valid(String s, int start, int length) {
            // Length 1: always valid ("0"–"9")
            if (length == 1) {
                  return true;
            }
            // Leading zero is not allowed for multi-digit segments
            if (s.charAt(start) == '0') {
                  return false;
            }
            // Length 2: "10"–"99", always <= 255 so valid
            if (length == 2) {
                  return true;
            }
            // Length 3: must be <= "255"
            // Compare as string works because all are 3-digit numbers: "000"–"999"
            String segment = s.substring(start, start + length);
            return segment.compareTo("255") <= 0;
      }

      // Backtracking helper to build IP addresses
      private void helper(String s, int startIndex, List<Integer> dots, List<String> ans) {
            int remainingLength = s.length() - startIndex;
            int remainingNumberOfIntegers = 4 - dots.size();

            // Prune impossible states
            if (remainingLength > remainingNumberOfIntegers * 3 ||
                        remainingLength < remainingNumberOfIntegers) {
                  return;
            }

            // If 3 segments already chosen, the rest must form the 4th
            if (dots.size() == 3) {
                  if (valid(s, startIndex, remainingLength)) {
                        // Build IP string from segment lengths stored in dots
                        StringBuilder temp = new StringBuilder();
                        int last = 0;
                        for (int len : dots) {
                              temp.append(s, last, last + len).append('.');
                              last += len;
                        }
                        // Append last segment
                        temp.append(s.substring(startIndex));
                        ans.add(temp.toString());
                  }
                  return;
            }

            // Try segment lengths from 1 to 3
            for (int curPos = 1; curPos <= 3 && curPos <= remainingLength; curPos++) {
                  // Choose current segment length
                  dots.add(curPos);
                  // Only recurse if segment is valid
                  if (valid(s, startIndex, curPos)) {
                        helper(s, startIndex + curPos, dots, ans);
                  }
                  // Backtrack
                  dots.remove(dots.size() - 1);
            }
      }

      public List<String> restoreIpAddresses(String s) {
            List<String> answer = new ArrayList<>();
            helper(s, 0, new ArrayList<>(), answer);
            return answer;
      }
}
