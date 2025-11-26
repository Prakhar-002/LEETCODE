// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q3

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] exclusiveTime(int n, List<String> logs) {
            int[] res = new int[n]; // Array to store exclusive times for each function
            Deque<Integer> stack = new ArrayDeque<>(); // Stack to keep track of active functions
            int prevTime = 0; // Previous timestamp for elapsed time calculations

            for (String log : logs) {
                  String[] parts = log.split(":");
                  int funcId = Integer.parseInt(parts[0]);
                  String type = parts[1];
                  int timestamp = Integer.parseInt(parts[2]);

                  if (type.equals("start")) {
                        // If an active function exists, add elapsed time so far to it
                        if (!stack.isEmpty()) {
                              res[stack.peek()] += timestamp - prevTime;
                        }
                        // Push new function onto stack
                        stack.push(funcId);
                        prevTime = timestamp;
                  } else {
                        // Pop function and add inclusive elapsed time (+1)
                        res[stack.pop()] += timestamp - prevTime + 1;
                        prevTime = timestamp + 1;
                  }
            }

            return res;
      }
}
