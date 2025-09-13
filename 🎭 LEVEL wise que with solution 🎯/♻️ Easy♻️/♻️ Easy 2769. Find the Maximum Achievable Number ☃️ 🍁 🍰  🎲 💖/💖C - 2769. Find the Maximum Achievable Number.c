//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2769

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

int theMaximumAchievableX(int num, int t) {
      //      Calculate maximum achievable x
      //      Starting value: num
      //      Each step adds 2, so total added is 2*t
      return num + 2 * t;
}
