#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2526

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1) 

class DataStream:
      def __init__(self, value: int, k: int):
            # `n` will count the current number of consecutive occurrences of `value`.
            self.n = 0
            # `value` is the target integer we are looking for.
            self.value = value
            # `k` is the required length of the consecutive streak.
            self.k = k

      def consec(self, num: int) -> bool:
            # Check if the incoming number matches our target `value`.
            if self.value == num:
                  # If it matches, we are extending the current streak.
                  self.n += 1
            else:
                  # If it does not match, the streak is broken, so reset the counter.
                  self.n = 0

            # The condition is met if our current streak count (`n`) is at least `k`.
            return self.n >= self.k
