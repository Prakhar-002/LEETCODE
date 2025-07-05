//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n) 

class Solution {
      public int findLucky(int[] arr) {
            Map<Integer, Integer> freq = new HashMap<>();

            // Count frequency of each number
            for (int num : arr) {
                  freq.put(num, freq.getOrDefault(num, 0) + 1);
            }

            int res = -1; // Initialize result to -1

            // Iterate through the frequency map
            for (Map.Entry<Integer, Integer> entry : freq.entrySet()) {
                  int key = entry.getKey(), val = entry.getValue();
                  // Check if the value is a lucky number (value == frequency)
                  if (key == val) {
                        res = Math.max(res, key); // Update the max lucky number
                  }
            }

            return res; // Return result
      }
}
