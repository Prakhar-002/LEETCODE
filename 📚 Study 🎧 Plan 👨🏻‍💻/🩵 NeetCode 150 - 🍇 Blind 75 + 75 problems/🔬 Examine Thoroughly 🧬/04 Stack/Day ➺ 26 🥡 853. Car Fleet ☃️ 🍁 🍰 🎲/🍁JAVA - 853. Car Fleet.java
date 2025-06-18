//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 853

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int carFleet(int target, int[] position, int[] speed) {
            int n = position.length; 

            // Pair up position and speed for each car
            int[][] pairs = new int[n][2];
            for (int i = 0; i < n; i++) {
                  pairs[i][0] = position[i];
                  pairs[i][1] = speed[i];
            }

            // Sort cars in descending order of position (closer to target first)
            Arrays.sort(pairs, (a, b) -> b[0] - a[0]);

            // Stack to keep track of fleet arrival times
            Stack<Double> stack = new Stack<>();

            // Iterate through the sorted cars
            for (int[] pair : pairs) {
                  int pos = pair[0];
                  int spd = pair[1];

                  // Calculate time to reach the target
                  double time = (double) (target - pos) / spd;
                  stack.push(time); // Push this car’s time onto the stack

                  // If current car catches up to the one ahead, merge them
                  if (stack.size() >= 2 && stack.get(stack.size() - 1) <= stack.get(stack.size() - 2)) {
                        stack.pop(); // Merge fleet by popping the recent one
                  }
            }

            // Remaining items in the stack represent separate fleets
            return stack.size();
      }
}
