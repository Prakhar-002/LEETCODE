#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2363

# ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(items1) m = len(items2)

# ? 🧺 Space complexity ➺ O(n + m)          👉🏻    k = No. of unique value

class Solution:
      def mergeSimilarItems(self, items1: List[List[int]], items2: List[List[int]]) -> List[List[int]]:
            # Dictionary to store weight sums for each value (default value is 0)
            val_to_wei = defaultdict(int)

            # Process the first list and add weights to corresponding values
            for value, weight in items1:
                  val_to_wei[value] += weight

            # Process the second list and add weights to corresponding values
            for value, weight in items2:
                  val_to_wei[value] += weight

            # This will hold the final result list
            ret = []

            # Iterate through values in sorted order and add [value, total_weight] to result
            for value in sorted(val_to_wei.keys()):
                  ret.append([value, val_to_wei[value]])

            # Return the merged and sorted list of items
            return ret
