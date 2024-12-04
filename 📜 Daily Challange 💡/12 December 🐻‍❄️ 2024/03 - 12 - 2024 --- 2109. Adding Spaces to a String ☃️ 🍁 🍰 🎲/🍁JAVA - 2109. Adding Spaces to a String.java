//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2109

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(spaces)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String addSpaces(String s, int[] spaces) {
            // Initialize a variable to keep track of the previous index
            int prevIndex = 0;
            StringBuilder result = new StringBuilder();

            // Iterate through the list of space positions
            for (int i : spaces) {
                  // Append the substring from the previous index to the current space position
                  result.append(s, prevIndex, i).append(" "); // Add a space after each segment
                  prevIndex = i; // Update the previous index
            }

            // Append the remaining part of the string after the last space
            result.append(s.substring(prevIndex));

            return result.toString();
      }
}
