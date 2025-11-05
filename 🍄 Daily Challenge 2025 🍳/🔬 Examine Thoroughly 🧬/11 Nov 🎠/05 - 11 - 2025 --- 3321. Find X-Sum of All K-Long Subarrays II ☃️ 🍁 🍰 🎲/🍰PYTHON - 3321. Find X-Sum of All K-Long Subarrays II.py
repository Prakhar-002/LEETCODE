#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3321

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from sortedcontainers import SortedList
from collections import defaultdict 

class Helper:
      def __init__(self, x):
            # Initialize the helper with parameter x (number of top elements to consider)
            self.x = x
            # Store the running sum of x largest (occurrence * number) pairs
            self.result = 0
            # SortedList to maintain the largest x elements (by (occurrence, number))
            self.large = SortedList()
            # SortedList to maintain the remaining smaller elements
            self.small = SortedList()
            # Dictionary to store occurrence count of each number
            self.occ = defaultdict(int)

      def insert(self, num):
            # If the number already exists, remove its old (occurrence, num) pair
            if self.occ[num] > 0:
                  self.internal_remove((self.occ[num], num))
            # Increment occurrence count
            self.occ[num] += 1
            # Insert updated (occurrence, num) pair
            self.internal_insert((self.occ[num], num))

      def remove(self, num):
            # Remove the old (occurrence, num) pair
            self.internal_remove((self.occ[num], num))
            # Decrease occurrence count
            self.occ[num] -= 1
            # If number still exists, reinsert with updated occurrence
            if self.occ[num] > 0:
                  self.internal_insert((self.occ[num], num))

      def get(self):
            # Return the current total sum of the top x (occurrence * number) pairs
            return self.result

      def internal_insert(self, p):
            # Insert a pair (occurrence, number)
            # If large has space or new pair is larger than smallest in large
            if len(self.large) < self.x or p > self.large[0]:
                  # Update sum since this goes into the large set
                  self.result += p[0] * p[1]
                  self.large.add(p)
                  # Ensure large never exceeds x elements
                  if len(self.large) > self.x:
                        # Move the smallest element from large to small
                        to_remove = self.large[0]
                        self.result -= to_remove[0] * to_remove[1]
                        self.large.remove(to_remove)
                        self.small.add(to_remove)
            else:
                  # Otherwise, insert into small set
                  self.small.add(p)

      def internal_remove(self, p):
            # Remove a pair (occurrence, number)
            # If the pair belongs to the large list
            if p >= self.large[0]:
                  # Subtract its contribution from the sum
                  self.result -= p[0] * p[1]
                  self.large.remove(p)
                  # If we can promote the largest small element to large
                  if self.small:
                        to_add = self.small[-1]
                        self.result += to_add[0] * to_add[1]
                        self.small.remove(to_add)
                        self.large.add(to_add)
            else:
                  # Otherwise, simply remove from the small list
                  self.small.remove(p)


class Solution:
      def findXSum(self, nums, k, x):
            # Create helper object to manage occurrence tracking and x-largest logic
            helper = Helper(x)
            # List to store results for each sliding window
            ans = []

            # Iterate through all numbers
            for i in range(len(nums)):
                  # Insert the current number
                  helper.insert(nums[i])
                  # Once window exceeds size k, remove the oldest element
                  if i >= k:
                        helper.remove(nums[i - k])
                  # Once we've processed at least k elements, record result
                  if i >= k - 1:
                        ans.append(helper.get())

            # Return the result list containing the sum for each k-sized window
            return ans
