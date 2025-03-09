// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3206

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(colors)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numberOfAlternatingGroups(int[] colors) {
            int N = colors.length;
            int altGrp = 0;

            // Iterate through each index in the array
            for (int i = 0; i < N; i++) {
                  // Use modulo to wrap around circularly
                  int next = (i + 1) % N;
                  int nextNext = (i + 2) % N;

                  // Ensure all three adjacent colors are different
                  if (colors[i] != colors[next] && colors[next] != colors[nextNext]) {
                        altGrp++;
                  }
            }

            return altGrp;
      }
}
