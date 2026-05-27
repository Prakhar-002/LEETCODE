//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3121

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numberOfSpecialChars(String word) {
            // lastSmall[i]    = last index where lowercase letter i appeared
            // firstCapital[i] = first index where uppercase letter i appeared
            int[] lastSmall    = new int[26];
            int[] firstCapital = new int[26];

            // Fill with -1 to indicate "not seen yet"
            java.util.Arrays.fill(lastSmall,    -1);
            java.util.Arrays.fill(firstCapital, -1);

            for (int i = 0; i < word.length(); i++) {
                  char ch = word.charAt(i);
                  if (Character.isLowerCase(ch)) {
                        // Always update to keep the LAST occurrence of lowercase
                        lastSmall[ch - 'a'] = i;
                  } else {
                        // Only record the FIRST occurrence of uppercase
                        if (firstCapital[ch - 'A'] == -1)
                              firstCapital[ch - 'A'] = i;
                  }
            }

            int count = 0;

            for (int i = 0; i < 26; i++) {
                  // Valid special pair: both exist and last lowercase comes before first uppercase
                  if (lastSmall[i] != -1 && firstCapital[i] != -1 && lastSmall[i] < firstCapital[i])
                        count++;
            }

            return count;
      }
}