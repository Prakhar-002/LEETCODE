// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3208

// ? ⌚ Time complexity ➺ O(n + k) 👉🏻 n = len(colors)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numberOfAlternatingGroups(int[] colors, int k) {
            int N = colors.length; // Total number of elements in the colors array
            int altGroup = 0; // Counter for alternating groups of at least length k

            int altElemCnt = 1; // Count of consecutive alternating elements
            int lastColor = colors[0]; // Track the last seen color

            // Step 1: Traverse the colors array and count alternating sequences
            for (int i = 1; i < N; i++) {
                  if (colors[i] == lastColor) { // Reset count if the same color repeats
                        altElemCnt = 1;
                        lastColor = colors[i];
                        continue;
                  }

                  altElemCnt++; // Increase count for alternating colors

                  if (altElemCnt >= k) { // If the alternating sequence is long enough
                        altGroup++;
                  }

                  lastColor = colors[i]; // Update the last seen color
            }

            // Step 2: Additional check for the first k-1 elements (potential wrap-around)
            for (int i = 0; i < k - 1; i++) {
                  if (colors[i] == lastColor) { // Stop if colors repeat
                        break;
                  }

                  altElemCnt++; // Extend alternating sequence

                  if (altElemCnt >= k) { // If still valid, count the group
                        altGroup++;
                  }

                  lastColor = colors[i]; // Update last seen color
            }

            return altGroup; // Return the count of alternating groups of at least k
      }
}
