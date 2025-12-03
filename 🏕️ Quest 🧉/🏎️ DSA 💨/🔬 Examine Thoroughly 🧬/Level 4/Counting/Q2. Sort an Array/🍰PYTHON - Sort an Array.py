#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 912

# ? ⌚ Time complexity -> O(n) 👉🏻 nums length

# ? 🧺 Space complexity -> O(m) 👉🏻 m = max - min

class Solution:
      def sortArray(self, nums: List[int]) -> List[int]:
            # let 0th idx val is max and min
            max_val = nums[0]
            min_val = nums[0]

            for num in nums:
                  # find the max from array
                  max_val = max(max_val, num)
                  # find the min from array
                  min_val = min(min_val, num)

            # get the length of our new array
            n = max_val - min_val
            # make the array of out length (n) which will be used to 
            # store the frequency of each integer value in `nums`.
            arr = [0] * (n + 1)

            for num in nums:
                  # count the freq of nums's elem
                  arr[num - min_val] += 1

            idx = 0

            # This is where the actual sorting happens. 
            # `idx` is an index pointer for updating the input array `nums`. 
            # The outer loop iterates through each possible value in the range between `min_val` and `max_val`. 
            # The inner while loop runs as long as there are still occurrences (`arr[i] > 0`) of the current number (`min_val`). 
            # Each time, it assigns the number `min_val` to `nums[idx]` and increments `idx`. 
            # It also decrements the frequency count `arr[i]`. 
            # After exhausting the occurrences of `min_val`, the value of `min_val` is incremented to move to the next number.

            # go through the whole array 
            for i in range(n + 1):
                  # up to freq of each elem of our array
                  while arr[i] > 0:
                        # assign the value 
                        nums[idx] = min_val
                        idx += 1
                        # dec freq
                        arr[i] -= 1

                  # inc the value 
                  min_val += 1

            # return new array
            return nums