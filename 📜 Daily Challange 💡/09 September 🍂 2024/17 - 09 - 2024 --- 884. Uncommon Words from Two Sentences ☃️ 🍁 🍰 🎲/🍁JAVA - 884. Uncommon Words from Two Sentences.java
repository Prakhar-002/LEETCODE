//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 884

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total No. of Words in s1 + s2

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String[] uncommonFromSentences(String s1, String s2) {
            // Use HashMap to store word counts
            Map<String, Integer> count = new HashMap<>();

            // Split and count words from both sentences
            for (String s : (s1 + " " + s2).split(" ")) {
                  // increments the count of each word in the `count` dictionary
                  count.put(s, count.getOrDefault(s, 0) + 1);
            }

            // Filter words that occur only once
            List<String> uncommonWords = new ArrayList<>();

            // iterate oven map 
            for (Map.Entry<String, Integer> entry : count.entrySet()) {
                  // if word count is 1
                  if (entry.getValue() == 1) {
                        // add it in our list
                        uncommonWords.add(entry.getKey());
                  }
            }

            // Convert List to array and return
            return uncommonWords.toArray(new String[0]);
      }
}
