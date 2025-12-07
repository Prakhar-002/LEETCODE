//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1523

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countOdds(int low, int high) {
            // Number of odd integers from 1 up to 'high':
            // Every 2 numbers contains exactly 1 odd → (high + 1) / 2
            // Number of odd integers from 1 up to 'low - 1':
            // low / 2 counts odds strictly before low
            // Subtract to get odds in inclusive range [low, high]
            return (high + 1) / 2 - (low / 2);
      }
}
