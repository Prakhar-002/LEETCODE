#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 440

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findKthNumber(self, n: int, k: int) -> int:
            # `cur` is initialized to 1, 
            # which is our starting point in lexicographical order
            cur = 1
            # `i` is initialized to 1, 
            # representing the first step in our search
            i = 1

            def stepCount(cur):
                  # `steps` initializes at 0, 
                  # which will accumulate the count of valid numbers
                  steps = 0
                  # `first` will start from the current prefix
                  first = cur
                  # `last` is the next prefix in the sequence
                  last = cur + 1

                  #  loop breaks when `first` goes beyond `n`
                  while first <= n:
                        # calculates the number of steps 
                        # or numbers between 'cur' and the next prefix
                        steps += min(last, n + 1) - first
                        # explore numbers within the range 
                        # while multiplying by 10 for each iteration
                        first *= 10
                        last *= 10
                  return steps

            # Runs until we reach the k-th number
            while i < k:
                  # `stepCount(cur)` is used to determine the 
                  # number of lexicographical numbers from the current `cur`
                  steps = stepCount(cur)

                  # If adding `steps` to `i` would overshoot `k`
                  # it means the k-th number must be found by 
                  # going deeper into the current prefix
                  if i + steps <= k:
                        # If it does not overshoot, it points to the fact that 
                        # the k-th number is not within this deeper level

                        # `cur` is incremented by 1 to move to the next prefix
                        # (e.g., from `1` to `2` if initially 1 had been the current)
                        cur += 1
                        #  Increment `i` by `steps` since all those steps are now included up to the next prefix
                        i += steps
                  else:
                        # `cur` is multiplied by 10 
                        # to go one level deeper in the lexicographical tree 
                        # (e.g., from 1 to 10, 10 to 100)
                        cur *= 10
                        #  Increment `i` since it now includes the current `cur` number itself
                        i += 1

            return cur