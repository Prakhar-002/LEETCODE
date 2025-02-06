#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 167

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def twoSum(self, numbers: List[int], target: int) -> List[int]:
            # taking to pointer a star with 0 and end
            first = 0
            second = len(numbers) - 1

            # While first <= second
            while first <= second :
                  # Calculating sum
                  sum = numbers[first] + numbers[second]
                  #  If it is equal to target break
                  if sum == target:
                        break
                  # If sum is greater than target shift second pointer to left
                  elif sum > target:
                        second -= 1
                  # sum is smaller than target shift first pointer to right 
                  else :
                        first += 1

            # return array of both index + 1
            return [first + 1, second + 1]