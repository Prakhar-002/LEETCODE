//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3208

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(colors)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h> 

int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
      // Get the total number of elements in the colors array
      int N = colorsSize;
      // Counter for the number of alternating groups of at least length k
      int altGroup = 0;
      // Count of consecutive alternating elements
      int alt_elem_cnt = 1;
      // Track the last seen color
      int last_color = colors[0];

      // Step 1: Traverse the colors array to count alternating sequences
      for (int i = 1; i < N; i++) {
            // If the current color is the same as the last one, reset the count
            if (colors[i] == last_color) {
                  alt_elem_cnt = 1;
                  last_color = colors[i];
                  continue;
            }

            // Increase count for alternating colors
            alt_elem_cnt++;

            // If the alternating sequence is long enough, count it
            if (alt_elem_cnt >= k) {
                  altGroup++;
            }

            // Update the last seen color
            last_color = colors[i];
      }

      // Step 2: Handle edge case - check additional elements from the start
      for (int i = 0; i < k - 1; i++) {
            // Stop if a color repeats
            if (colors[i] == last_color) {
                  break;
            }

            // Continue the alternating sequence
            alt_elem_cnt++;

            // Count the group if the length reaches at least k
            if (alt_elem_cnt >= k) {
                  altGroup++;
            }

            // Update the last seen color
            last_color = colors[i];
      }

      return altGroup; // Return the number of alternating groups of at least k
}