class Solution:
      def minIncrementForUnique(self, nums: List[int]) -> int:
            # Count freq of each element by HashMap
            freqCount = Counter(nums)

            increment = 0

            for i in range (len(nums) + max(nums)):
                  # Check if freq of elem is > 1
                  if freqCount[i] > 1:
                        # Assign freq = 1 and take out the extra one
                        extra = freqCount[i] - 1
                        # add extra freq to next index (for making array unique)
                        freqCount[i + 1] += extra
                        # add extra to our increment
                        increment += extra

            return increment