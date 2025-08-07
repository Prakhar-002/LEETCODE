//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 621

//? ⌚ Time complexity ➺ O(m)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int leastInterval(vector<char>& tasks, int n) {
            // Frequency array for 26 uppercase letters
            vector<int> count(26, 0);

            // Count frequency of each task
            for (char task : tasks) {
                  count[task - 'A']++;
            }

            // Find the max frequency
            int maxf = *max_element(count.begin(), count.end());

            // Count how many tasks have max frequency
            int maxCount = 0;
            for (int c : count) {
                  if (c == maxf) {
                        maxCount++;
                  }
            }

            // Calculate minimum time using the formula
            int time = (maxf - 1) * (n + 1) + maxCount;

            // Return the max between time and number of tasks
            return max((int)tasks.size(), time);
      }
};
