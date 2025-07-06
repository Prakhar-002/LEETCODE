#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1865

#? ⌚ Time complexity ➺ O(n + m + q1 + q2 * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n + m)   m = lem(nums2)

class FindSumPairs:

      def __init__(self, nums1: List[int], nums2: List[int]):
            self.n1 = nums1                     # First array (does not change)
            self.n2 = nums2                     # Second array (values can change)
            self.mp = Counter(nums2)            # Count frequency of nums2 elements

      def add(self, index: int, val: int) -> None:
            # Decrease frequency of old value
            self.mp[self.n2[index]] -= 1

            # Update value in nums2
            self.n2[index] += val

            # Increase frequency of new value
            self.mp[self.n2[index]] += 1

      def count(self, tot: int) -> int:
            ans = 0

            # For each element in nums1, check if (target - num1[i]) exists in nums2
            for i in range(len(self.n1)):
                  complement = tot - self.n1[i]
                  if complement in self.mp:
                        ans += self.mp[complement]  # Add frequency of the complement

            return ans
