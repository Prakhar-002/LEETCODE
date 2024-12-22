//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2182

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public String repeatLimitedString(String s, int repeatLimit) {
            // Count frequency of each character
            Map<Character, Integer> charFrequency = new HashMap<>();
            for (char ch : s.toCharArray()) {
                  charFrequency.put(ch, charFrequency.getOrDefault(ch, 0) + 1);
            }

            // Create a max heap (priority queue) based on character ASCII values
            PriorityQueue<int[]> maxHeap = new PriorityQueue<>(
                  (a, b) -> Integer.compare(b[0], a[0]) // Compare by ASCII values in reverse order
            );
            for (Map.Entry<Character, Integer> entry : charFrequency.entrySet()) {
                  maxHeap.offer(new int[]{entry.getKey(), entry.getValue()});
            }

            StringBuilder result = new StringBuilder();

            // Process the heap
            while (!maxHeap.isEmpty()) {
                  // Extract the most frequent character with the highest ASCII value
                  int[] current = maxHeap.poll();
                  char currentChar = (char) current[0];
                  int frequency = current[1];

                  // Determine how many times this character can be appended
                  int allowedRepeats = Math.min(frequency, repeatLimit);
                  result.append(String.valueOf(currentChar).repeat(allowedRepeats));

                  // Check if there are leftover occurrences of this character
                  if (frequency - allowedRepeats > 0 && !maxHeap.isEmpty()) {
                        // Extract the next character from the heap
                        int[] next = maxHeap.poll();
                        char nextChar = (char) next[0];
                        int nextFrequency = next[1];

                        // Append one occurrence of the next character
                        result.append(nextChar);

                        // Push the next character back if it has remaining occurrences
                        if (nextFrequency > 1) {
                              maxHeap.offer(new int[]{next[0], nextFrequency - 1});
                        }

                        // Push the remaining occurrences of the current character back into the heap
                        maxHeap.offer(new int[]{current[0], frequency - allowedRepeats});
                  }
            }

            return result.toString();
      }
}
