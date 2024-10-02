#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1331

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def arrayRankTransform(self, arr: List[int]) -> List[int]:
            if len(arr) == 0:
                  return arr;

            # Step 1: Create a copy of the original array
            sortedList = arr[:]

            # Step 2: Sort the copied array
            sortedList.sort()

            # Step 3: Assign ranks to elements in sorted order
            rankMap = {}
            rank = 1

            for num in sortedList:
                  if num not in rankMap:
                        rankMap[num] = rank
                        rank += 1

            # Step 4: Replace elements in the original array with their ranks
            return [ rankMap[num] for num in arr ]