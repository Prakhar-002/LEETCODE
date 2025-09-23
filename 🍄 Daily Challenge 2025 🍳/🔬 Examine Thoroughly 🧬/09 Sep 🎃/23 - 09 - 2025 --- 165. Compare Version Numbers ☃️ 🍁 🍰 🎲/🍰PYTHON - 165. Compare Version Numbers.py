#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 165

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def compareVersion(self, version1: str, version2: str) -> int:
            # Split the version strings into list of segments
            s1 = version1.split('.')
            s2 = version2.split('.')

            # Find the max length to align both versions
            maxLength = max(len(s1), len(s2))

            for i in range(maxLength): 
                  # Get integer value for each segment, default 0 if missing
                  v1 = int(s1[i]) if i < len(s1) else 0
                  v2 = int(s2[i]) if i < len(s2) else 0

                  # Compare segments
                  if v1 != v2:
                        return 1 if v1 > v2 else -1
            # All segments are equal
            return 0
