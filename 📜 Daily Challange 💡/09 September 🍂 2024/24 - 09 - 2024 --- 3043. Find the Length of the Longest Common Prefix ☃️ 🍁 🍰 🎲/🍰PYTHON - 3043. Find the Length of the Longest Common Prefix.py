#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3043

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(arr1), m = len(arr2)

#? 🧺 Space complexity ➺ O(m)

class Solution:
      def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
            # if `arr1` is longer than `arr2`
            if len(arr1) > len(arr2):
                  # they are swapped
                  # This ensures that `arr1` is the shorter of the two lists
                  arr1, arr2 = arr2, arr1

            # Creating a Set of Numerical Prefixes
            prefix_set = set()

            # For each number `num` in `arr1
            for num in arr1:
                  # `123`, `prefix_set` will get `123`, `12`, and `1`
                  #  until `num` becomes 0 or is already in the set
                  while num and num not in prefix_set: 
                        # added to the `prefix_set
                        prefix_set.add(num)
                        # and the number is continually divided by 10
                        num //= 10

            # `longestPrefix` is to keep track of the longest common prefix found
            longestPrefix = 0

            # For each number `num` in `arr2`
            for num in arr2:
                  # until num either becomes 0 or is found in `prefix_set`
                  while num and num not in prefix_set:
                        # number is continually divided by 10
                        num //= 10

                  #  If such a common number `num` (prefix) is found in `prefix_set`
                  if num:
                        # length of this number is compared with `longestPrefix`
                        # updated if this prefix is longer
                        longestPrefix = max(longestPrefix, len(str(num)))

            # returns the longest common prefix
            return longestPrefix