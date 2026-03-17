//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 49

//? ⌚ Time complexity ➺ O(m * n log n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Sorting 

import java.util.*;

class Solution {
      public List<List<String>> groupAnagrams(String[] strs) {
            // Create a HashMap to group anagrams together
            Map<String, List<String>> res = new HashMap<>();

            // Iterate through each string in the input array
            for (String s : strs) {
                  // Sort the string alphabetically to create a common key for anagrams
                  char[] charArray = s.toCharArray();
                  Arrays.sort(charArray);
                  String sortedS = new String(charArray);

                  // If the key doesn't exist in the map, add it with a new list
                  res.putIfAbsent(sortedS, new ArrayList<>());
                  
                  // Append the original string to the corresponding group
                  res.get(sortedS).add(s);
            }

            // Return the grouped anagrams as a list of lists
            return new ArrayList<>(res.values());
      }
}

//!-------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Hash Table 

public class Solution {
      public List<List<String>> groupAnagrams(String[] strs) {
            // Create a HashMap to group anagrams together
            // The key is a string representation of the character frequency array
            // The value is a list of strings (anagrams)
            Map<String, List<String>> res = new HashMap<>();

            // Iterate through each string in the input array
            for (String s : strs) {
                  // Initialize a character frequency array for 'a' to 'z'
                  int[] count = new int[26];

                  // Count the frequency of each character in the string
                  for (char c : s.toCharArray()) {
                        count[c - 'a']++;
                  }

                  // Convert the character frequency array into a unique key
                  // This ensures all anagrams have the same key
                  String key = Arrays.toString(count);

                  // If the key doesn't exist in the map, add it with a new list
                  res.putIfAbsent(key, new ArrayList<>());

                  // Add the current string to the corresponding list of anagrams
                  res.get(key).add(s);
            }

            // Return the grouped anagrams as a list of lists
            return new ArrayList<>(res.values());
      }
}
