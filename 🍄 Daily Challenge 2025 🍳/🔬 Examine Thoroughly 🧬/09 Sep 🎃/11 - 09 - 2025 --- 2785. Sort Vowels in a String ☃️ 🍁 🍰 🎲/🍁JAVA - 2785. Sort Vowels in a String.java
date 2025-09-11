//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2785

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public String sortVowels(String s) {
            // Tracks count for each vowel character
            Map<Character, Integer> vowCount = new HashMap<>();

            String vowels = "aeiouAEIOU"; // String containing all possible vowels

            // Count frequency only for vowels
            for (char ch : s.toCharArray()) {
                  if (vowels.indexOf(ch) != -1) {
                        vowCount.put(ch, vowCount.getOrDefault(ch, 0) + 1);
                  }
            }

            String sortedVowel = "AEIOUaeiou"; // Sorted vowels (uppercase then lowercase)
            StringBuilder ans = new StringBuilder(); // To build the final string
            int j = 0; // Pointer in sortedVowel string

            // Traverse the input string and substitute vowels in sorted order
            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  if (vowels.indexOf(ch) == -1) {
                        ans.append(ch); // Non-vowel, append as is
                  } else {
                        // Find next available vowel with remaining count
                        while (j < sortedVowel.length()
                                    && (!vowCount.containsKey(sortedVowel.charAt(j))
                                                || vowCount.get(sortedVowel.charAt(j)) == 0)) {
                              j++;
                        }

                        ans.append(sortedVowel.charAt(j)); // Place smallest available vowel
                        vowCount.put(sortedVowel.charAt(j), vowCount.get(sortedVowel.charAt(j)) - 1); // Decrease count
                  }
            }
            return ans.toString(); // Return the final string
      }
}

//!----------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public String sortVowels(String s) {
            String vowels = "AEIOUaeiou";           //      String containing all vowel letters

            //      List to collect vowels from input string
            java.util.List<Character> vows = new java.util.ArrayList<>();

            //      Iterate through input string and collect vowels
            for (char ch : s.toCharArray()) {
                  if (vowels.indexOf(ch) != -1) {
                        vows.add(ch);              //      Add vowel character to vows
                  }
            }

            java.util.Collections.sort(vows);      //      Sort vowels alphabetically

            int i = 0;                             //      Index for vowels in sorted order
            StringBuilder t = new StringBuilder(); //      To build output string

            //      Reconstruct string with sorted vowels
            for (char ch : s.toCharArray()) {
                  if (vowels.indexOf(ch) != -1) {
                        t.append(vows.get(i));     //      Substitute vowel with sorted one
                        i++;
                  } else {
                        t.append(ch);              //      Keep consonant as is
                  }
            }
            return t.toString();                   //      Return final string
      }
}
