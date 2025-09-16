//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2197

//? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<Integer> replaceNonCoprimes(int[] nums) {
            List<Integer> stack = new ArrayList<>(); // Stack to store and process numbers

            for (int num : nums) { // Iterate through each number in the input array
                  while (!stack.isEmpty()) { // While stack is not empty
                        int top = stack.get(stack.size() - 1); // Get the top value in the stack
                        int g = gcd(top, num); // Compute the GCD of top and current number
                        if (g == 1) { // If coprime, no merge needed; exit loop
                              break;
                        }

                        stack.remove(stack.size() - 1); // Remove the top value from stack
                        num = (top / g) * num; // Merge (calculate LCM) and continue checking
                  }

                  stack.add(num); // Add current (possibly merged) number to stack
            }

            return stack; // Return the processed stack as final result
      }

      private int gcd(int a, int b) {
            if (b == 0)
                  return a; // Base case: GCD found
            return gcd(b, a % b); // Recursive Euclidean algorithm
      }
}
