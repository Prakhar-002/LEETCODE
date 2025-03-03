#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2161

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

#* One Pass 

class Solution:
      def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
            # Step 1: Find the length of the input array
            N = len(nums)

            # Step 2: Initialize two pointers to handle placing elements
            # 'lessPtr' will place numbers smaller than pivot (from the left side)
            lessPtr = 0

            # 'greaterPtr' will place numbers greater than pivot (from the right side)
            greaterPtr = N - 1

            # Step 3: Create the result array (same size as nums), initially filled with zeros
            partitionArr = [0] * N

            # Step 4: First pass to process elements and categorize them into:
            #        - numbers smaller than pivot (placed at the beginning)
            #        - numbers greater than pivot (placed at the end)
            #        - numbers equal to pivot will be handled later
            # This pass uses two indices simultaneously: 
            # i scans from left to right and j scans from right to left
            for i, j in zip(range(N), range(N - 1, -1, -1)):

                  # If nums[i] is smaller than pivot, place it at 'lessPtr' position
                  if nums[i] < pivot:
                        partitionArr[lessPtr] = nums[i]
                        lessPtr += 1

                  # If nums[j] is greater than pivot, place it at 'greaterPtr' position
                  if nums[j] > pivot:
                        partitionArr[greaterPtr] = nums[j]
                        greaterPtr -= 1

            # Step 5: After the first pass, the middle section (between lessPtr and greaterPtr)
            #         should contain all values equal to pivot
            # We fill all those middle positions with the pivot itself
            while lessPtr <= greaterPtr:
                  partitionArr[lessPtr] = pivot
                  lessPtr += 1

            # Step 6: Return the fully partitioned array
            return partitionArr

#!---------------------------------------------------------- 

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

#* 3 iteration 

class Solution:
      def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
            # Allocate space for result array
            result = [0] * len(nums)

            # Index to track position for insertion
            index = 0

            # Step 1: Add all numbers smaller than pivot to result array
            for num in nums:
                  if num < pivot:
                        result[index] = num
                        index += 1

            # Step 2: Add all numbers equal to pivot to result array
            for num in nums:
                  if num == pivot:
                        result[index] = num
                        index += 1

            # Step 3: Add all numbers greater than pivot to result array
            for num in nums:
                  if num > pivot:
                        result[index] = num
                        index += 1

            # Return the rearranged array
            return result


#!---------------------------------------------------------- 

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

#* 3 Arrays (less, equal, greater)

class Solution:
      def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
            # List to store numbers less than pivot
            less = []
            # List to store numbers equal to pivot
            equal = []
            # List to store numbers greater than pivot
            greater = []

            # Iterate through each number in nums
            for n in nums:
                  # If number is less than pivot, add to 'less' list
                  if n < pivot:
                        less.append(n)
                  # If number is equal to pivot, add to 'equal' list
                  elif n == pivot:
                        equal.append(n)
                  # If number is greater than pivot, add to 'greater' list
                  else:
                        greater.append(n)

            # Combine all 3 lists and return the final result
            return less + equal + greater
