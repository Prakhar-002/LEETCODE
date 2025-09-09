#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1304

#? ⌚ Time complexity ➺ O(n) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def sumZero(self, n: int) -> List[int]:
            arr = []   #      Initialize the result array to store integers

            #      Add pairs of (-val, val) for each value from 1 to n // 2
            for val in range(1, (n // 2) + 1):
                  arr.append(-val)    #      Append negative value to balance positive
                  arr.append(val)     #      Append positive value for zero sum pairing

            #      If n is odd, add 0 to ensure total sum is zero
            if n % 2 == 1:
                  arr.append(0)       #      Append zero if required

            return arr   #      Return the array with n integers summing to zero
