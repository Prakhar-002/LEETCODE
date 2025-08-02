//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2561

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket1 + bucket2)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long minCost(int[] basket1, int[] basket2) {

            // Create a TreeMap to store the frequency difference of items in both baskets
            TreeMap<Integer, Integer> freq = new TreeMap<>();

            // Track the minimum value found in both baskets
            int m = Integer.MAX_VALUE;

            // Count frequency of each item in basket1 and update minimum
            for (int b1 : basket1) {
                  freq.put(b1, freq.getOrDefault(b1, 0) + 1);
                  m = Math.min(m, b1);
            }

            // Subtract frequency for items in basket2 and update minimum
            for (int b2 : basket2) {
                  freq.put(b2, freq.getOrDefault(b2, 0) - 1);
                  m = Math.min(m, b2);
            }

            // List to store half of the mismatched elements that need to be swapped
            List<Integer> merge = new ArrayList<>();

            // Traverse the frequency map
            for (var entry : freq.entrySet()) {
                  int count = entry.getValue();

                  // If count is odd, we cannot make equal baskets
                  if (count % 2 != 0)
                        return -1;

                  // Add half the excess elements (abs(count)/2) to the merge list
                  for (int i = 0; i < Math.abs(count) / 2; i++) {
                        merge.add(entry.getKey());
                  }
            }

            // Sort the merge list to handle smaller cost swaps first
            Collections.sort(merge);

            long res = 0;

            // Only half of the elements need to be swapped
            for (int i = 0; i < merge.size() / 2; i++) {
                  // Use the minimum cost between current item and 2 * m (replacement option)
                  res += Math.min(2 * m, merge.get(i));
            }

            return res;
      }
}
