//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 873

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int lenLongestFibSubseq(int[] arr) {
            // Use a HashSet to store array elements for fast lookup
            Set<Integer> arr_set = new HashSet<>();
            for (int n : arr) {
                  arr_set.add(n);
            }

            // Initialize variable to track the maximum subsequence length
            int maxFibLength = 0;

            // Outer loop to choose the first number
            for (int i = 0; i < arr.length - 1; i++) {
                  // Inner loop to choose the second number
                  for (int j = i + 1; j < arr.length; j++) {
                        // Set the initial two numbers of the subsequence
                        int prev = arr[i], cur = arr[j];

                        // Calculate the next number in the sequence
                        int nxt = prev + cur;

                        // The initial subsequence length is 2
                        int length = 2;

                        // Keep extending the subsequence if the next number exists
                        while (arr_set.contains(nxt)) {
                              // Increase the length of the subsequence
                              length++;

                              // Shift numbers forward
                              prev = cur;
                              cur = nxt;

                              // Calculate the next number
                              nxt = prev + cur;

                              // Update the maximum length found
                              maxFibLength = Math.max(maxFibLength, length);
                        }
                  }
            }

            // Return the length of the longest Fibonacci-like subsequence found
            return maxFibLength;
      }
}
