class Solution:
      def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
            # Three pointer sliding window approach
            left, middle = 0, 0
            subArrays = 0
            # Making a hashSet to store number and count  
            countHash = defaultdict(int)

            # Third pointer start from 0 to len
            for right in range(len(nums)):
                  # add to our hash that number
                  countHash[nums[right]] += 1

                  # If number of distinct element in our hash is greater then k 
                  # (cause we want subArray with k distinct number) 
                  while len(countHash) > k:
                        # We'll update our middle pointer 
                        # and by updating pointer we'll update the hash by dec count of that number
                        countHash[nums[middle]] -= 1
                        # If count is 0 for one number we'll delete that number from our hash
                        if countHash[nums[middle]] == 0:
                              countHash.pop(nums[middle])
                        # update middle  
                        middle += 1
                        # update left pointer by middle cause we don't need that more
                        left = middle

                  # if we get count greater than 1 for middle pointer value
                  while countHash[nums[middle]] > 1:
                        # so that means if we leave that elem after that we can possibly make an array with distinct k elem
                        countHash[nums[middle]] -= 1
                        middle += 1

                  # If we get k distinct elem so we can make total array by that big array will be =>
                  if len(countHash) == k:
                        # mid - left + 1
                        subArrays += (middle - left) + 1

            return subArrays