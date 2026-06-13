//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3838

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.List;

class Solution {
      public String mapWordWeights(List<String> words, List<Integer> weights) {
            // Maps weight mod 26 back to a letter (0→'z', 1→'y', ..., 25→'a')
            char[] wordMap = {
                        'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q',
                        'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g',
                        'f', 'e', 'd', 'c', 'b', 'a'
            };

            StringBuilder res = new StringBuilder();

            for (String word : words) {
                  int weight = 0;

                  // Sum weights of each character in the word
                  for (char ch : word.toCharArray()) {
                        weight += weights.get(ch - 'a');
                  }

                  // Map the mod result to its corresponding letter
                  res.append(wordMap[weight % 26]);
            }

            return res.toString();
      }
}