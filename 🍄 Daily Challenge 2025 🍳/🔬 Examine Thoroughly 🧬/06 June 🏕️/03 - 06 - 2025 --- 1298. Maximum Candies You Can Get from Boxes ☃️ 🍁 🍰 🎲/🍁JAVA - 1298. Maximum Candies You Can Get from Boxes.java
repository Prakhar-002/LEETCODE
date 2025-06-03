//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1298

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxCandies(
                  int[] status,
                  int[] candies,
                  int[][] keys,
                  int[][] containedBoxes,
                  int[] initialBoxes) {
            // Get total number of boxes
            int n = status.length;

            // Array to check if a box can be opened (true if we have key or it is already
            // open)
            boolean[] canOpen = new boolean[n];

            // Array to check if we have possession of a box
            boolean[] hasBox = new boolean[n];

            // Array to mark if a box is already used (opened and processed)
            boolean[] used = new boolean[n];

            // Initialize canOpen based on status array
            for (int i = 0; i < n; ++i) {
                  canOpen[i] = (status[i] == 1); // status[i] == 1 means it's openable
            }

            // Queue for processing the boxes that can be opened
            Queue<Integer> q = new LinkedList<>();

            // Variable to store the total candies collected
            int ans = 0;

            // Process all initial boxes we possess
            for (int box : initialBoxes) {
                  hasBox[box] = true; // Mark that we have this box
                  if (canOpen[box]) { // If the box can be opened
                        q.offer(box); // Add it to the queue
                        used[box] = true; // Mark it as used
                        ans += candies[box]; // Collect its candies
                  }
            }

            // Process the queue until no more boxes can be opened
            while (!q.isEmpty()) {
                  int bigBox = q.poll(); // Get a box from the queue

                  // Go through all keys found in the current box
                  for (int key : keys[bigBox]) {
                        canOpen[key] = true; // We can now open the box with this key
                        if (!used[key] && hasBox[key]) { // If we have the box and it’s not yet used
                              q.offer(key); // Add it to the queue
                              used[key] = true; // Mark as used
                              ans += candies[key]; // Collect candies
                        }
                  }

                  // Go through all boxes found inside the current box
                  for (int box : containedBoxes[bigBox]) {
                        hasBox[box] = true; // Mark that we have this contained box
                        if (!used[box] && canOpen[box]) { // If the box can be opened and not yet used
                              q.offer(box); // Add it to the queue
                              used[box] = true; // Mark as used
                              ans += candies[box]; // Collect candies
                        }
                  }
            }

            // Return total candies collected
            return ans;
      }
}
