#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1310

#? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(arr) q = Len(queries)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
            # `prefix` is a list initialized with a single element `0`
            prefix = [0]

            # calculates the cumulative XOR up to that element and appends
            for num in arr:
                  # XOR of the last element in the `prefix` list with the current element `num`
                  prefix.append(prefix[-1] ^ num)

            # For `arr = [1, 3, 4, 8]` :  `prefix = [0, 1, 2, 6, 14]`

            # initialized to store the results of each query
            answer = []

            # iterates each query (query is a list of two integers `[left, right]`) in `queries`
            for [left, right] in queries:
                  # To get the XOR of elements from index `left` to `right` 
                  # Use `prefix[right + 1] ^ prefix[left]`
                  answer.append(
                        # `prefix[right + 1]` => XOR of all elements from start up to `right`
                        # `prefix[left]` =>  XOR of all elements from the start up to `left - 1`
                        # XORing these two values cancels out the elements before `left`
                        prefix[right + 1] ^ prefix[left]
                  )

            # returns the `answer` list containing the results for all queries
            return answer