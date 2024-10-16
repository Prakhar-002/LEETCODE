//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1405

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = a + b + c

//? 🧺 Space complexity ➺ O(n)

import java.util.PriorityQueue;

class Solution {
      public String longestDiverseString(int a, int b, int c) {
            // Initialize an empty string to store the result and a max heap to maintain the
            // counts of characters.
            StringBuilder happyString = new StringBuilder();
            PriorityQueue<int[]> maxHeap = new PriorityQueue<>(
                        (x, y) -> y[0] - x[0] // Custom comparator for max heap
            );

            // Push the counts of 'a', 'b', and 'c' into the max heap
            if (a > 0)
                  maxHeap.offer(new int[] { a, 'a' });
            if (b > 0)
                  maxHeap.offer(new int[] { b, 'b' });
            if (c > 0)
                  maxHeap.offer(new int[] { c, 'c' });

            // Loop while there are still characters available in the heap.
            while (!maxHeap.isEmpty()) {
                  // Pop the character with the highest remaining count.
                  int[] current = maxHeap.poll();
                  int count = current[0];
                  char ch = (char) current[1];

                  int n = happyString.length();
                  // Check if the last two characters in the result are the same as the current
                  // character.
                  if (n > 1 && happyString.charAt(n - 1) == ch && happyString.charAt(n - 2) == ch) {
                        // If there's no other character available, break the loop as it's not possible
                        // to proceed.
                        if (maxHeap.isEmpty()) {
                              break;
                        }

                        // Otherwise, pop the character with the second-highest remaining count.
                        int[] next = maxHeap.poll();
                        happyString.append((char) next[1]);
                        if (--next[0] > 0) {
                              maxHeap.offer(next);
                        }
                  } else {
                        // If the last two characters are not the same, append the current character to
                        // the result.
                        happyString.append(ch);
                        count--;
                  }

                  // If the current character still has remaining occurrences, push it back into
                  // the heap.
                  if (count > 0) {
                        maxHeap.offer(new int[] { count, ch });
                  }
            }

            // Return the constructed happy string.
            return happyString.toString();
      }
}

// !----------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = a + b + c

// ? 🧺 Space complexity ➺ O(n)

class Solution {
      public String longestDiverseString(int a, int b, int c) {
            // Initialize a StringBuilder to build the resulting string
            StringBuilder sb = new StringBuilder();

            // Total length of the string will be the sum of a, b, and c
            int totalLength = a + b + c;

            // Initialize counters to keep track of consecutive occurrences of 'a', 'b', and 'c'
            int continuousA = 0, continuousB = 0, continuousC = 0;

            // Loop until we have used up all characters
            for (int i = 0; i < totalLength; i++) {

                  // Check if 'a' can be added based on its count and the rules:
                  // - 'a' is the most frequent letter remaining
                  // - Or if 'b' or 'c' has been used twice consecutively and 'a' is still available
                  if ((a >= b && a >= c && continuousA != 2)
                              || (continuousB == 2 && a > 0)
                              || (continuousC == 2 && a > 0)) {
                        // Append 'a' to the result
                        sb.append("a");
                        // Decrease the count of 'a'
                        a--;
                        // Increase the counter for consecutive 'a's and reset other counters
                        continuousA++;
                        continuousB = 0;
                        continuousC = 0;
                  }

                  // Check if 'b' can be added based on its count and the rules:
                  // - 'b' is the most frequent letter remaining
                  // - Or if 'a' or 'c' has been used twice consecutively and 'b' is still available
                  else if ((b >= a && b >= c && continuousB != 2)
                              || (continuousA == 2 && b > 0)
                              || (continuousC == 2 && b > 0)) {
                        // Append 'b' to the result
                        sb.append("b");
                        // Decrease the count of 'b'
                        b--;
                        // Increase the counter for consecutive 'b's and reset other counters
                        continuousB++;
                        continuousA = 0;
                        continuousC = 0;
                  }

                  // Check if 'c' can be added based on its count and the rules:
                  // - 'c' is the most frequent letter remaining
                  // - Or if 'a' or 'b' has been used twice consecutively and 'c' is still available
                  else if ((c >= a && c >= b && continuousC != 2)
                              || (continuousB == 2 && c > 0)
                              || (continuousA == 2 && c > 0)) {
                        // Append 'c' to the result
                        sb.append("c");
                        // Decrease the count of 'c'
                        c--;
                        // Increase the counter for consecutive 'c's and reset other counters
                        continuousC++;
                        continuousA = 0;
                        continuousB = 0;
                  }
            }

            // Return the final built string
            return sb.toString();
      }
}
