//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2769

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution { 
public:
      int theMaximumAchievableX(int num, int t) {
            //      Calculate the max achievable x
            //      We start at num and can increase by 2 for each of the t steps
            //      So max value = num + 2 * t
            return num + 2 * t;
      }
};
