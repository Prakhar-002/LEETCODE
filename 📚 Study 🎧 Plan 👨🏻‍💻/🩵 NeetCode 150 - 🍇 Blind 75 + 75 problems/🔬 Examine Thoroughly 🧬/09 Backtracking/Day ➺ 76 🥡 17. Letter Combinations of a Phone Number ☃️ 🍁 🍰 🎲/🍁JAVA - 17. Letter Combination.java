//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 17

//? ⌚ Time complexity ➺ O(n * 4 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public List<String> letterCombinations(String digits) {
            // Final result list
            List<String> res = new ArrayList<>();

            // Mapping of digits to letters (like old phone keypad)
            Map<Character, String> digitToChar = new HashMap<>();
            digitToChar.put('2', "abc");
            digitToChar.put('3', "def");
            digitToChar.put('4', "ghi");
            digitToChar.put('5', "jkl");
            digitToChar.put('6', "mno");
            digitToChar.put('7', "pqrs");
            digitToChar.put('8', "tuv");
            digitToChar.put('9', "wxyz");

            // If input digits string is empty → return empty result
            if (digits == null || digits.length() == 0) {
                  return res;
            }

            // Start backtracking from index 0 with empty current string
            backtrack(0, "", digits, digitToChar, res);

            return res;
      }

      private void backtrack(int i, String curStr, String digits,
                  Map<Character, String> digitToChar, List<String> res) {
            // Base Case: if the current combination length matches digits length
            if (curStr.length() == digits.length()) {
                  res.add(curStr);
                  return;
            }

            // Get possible letters for the current digit
            String letters = digitToChar.get(digits.charAt(i));

            // Try each letter choice and recurse for the next digit
            for (char ch : letters.toCharArray()) {
                  backtrack(i + 1, curStr + ch, digits, digitToChar, res);
            }
      }
}
