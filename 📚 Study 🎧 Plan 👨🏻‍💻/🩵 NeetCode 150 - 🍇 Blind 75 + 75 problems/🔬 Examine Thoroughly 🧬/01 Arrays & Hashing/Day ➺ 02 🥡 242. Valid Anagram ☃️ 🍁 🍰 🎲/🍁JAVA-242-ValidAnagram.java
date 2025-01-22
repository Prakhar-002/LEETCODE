//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 242

//? ⌚ Time complexity ➺ O(s + t) 👉🏻  s, t = len(s), len(t) 

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;

class Solution {
      public boolean isAnagram(String s, String t) {
            // if length of both strings is not equal
            if (s.length() != t.length())
                  return false;

            // make hashmap for both
            // max length of both hashmaps will be 26 so constant space
            HashMap<Character, Integer> sCount = new HashMap<>();
            HashMap<Character, Integer> tCount = new HashMap<>();

            // count the freq of both
            for (int i = 0; i < s.length(); i++) {
                  sCount.put(s.charAt(i), sCount.getOrDefault(s.charAt(i), 0) + 1);
                  tCount.put(t.charAt(i), tCount.getOrDefault(t.charAt(i), 0) + 1);
            }

            // check for freq of every char in s
            for (char ch : s.toCharArray()) {
                  if (!sCount.get(ch).equals(tCount.get(ch)))
                        return false;
            }

            return true;
      }
}
