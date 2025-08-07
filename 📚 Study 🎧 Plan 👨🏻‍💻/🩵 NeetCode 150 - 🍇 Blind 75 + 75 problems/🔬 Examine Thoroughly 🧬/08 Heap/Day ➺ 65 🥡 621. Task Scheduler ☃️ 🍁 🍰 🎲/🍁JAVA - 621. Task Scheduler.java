//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 621

//? ⌚ Time complexity ➺ O(m) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int leastInterval(char[] tasks, int n) {
            // Frequency array for 26 uppercase English letters
            int[] count = new int[26];

            // Count the frequency of each task
            for (char task : tasks) {
                  count[task - 'A']++;
            }

            // Find the task with maximum frequency
            int maxf = 0;
            for (int c : count) {
                  maxf = Math.max(maxf, c);
            }

            // Count how many tasks have the same max frequency
            int maxCount = 0;
            for (int c : count) {
                  if (c == maxf) {
                        maxCount++;
                  }
            }

            // Calculate the minimum required time
            int time = (maxf - 1) * (n + 1) + maxCount;

            // Return the maximum between time and number of tasks
            return Math.max(tasks.length, time);
      }
}
