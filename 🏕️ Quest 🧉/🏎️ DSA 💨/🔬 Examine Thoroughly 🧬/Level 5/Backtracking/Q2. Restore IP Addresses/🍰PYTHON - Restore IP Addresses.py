#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.5 Q2

#? ⌚ Time complexity ➺ O(m^n * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m * n) 

class Solution(object):
      # Method to check if substring s[start:start+length] is a valid IP segment (0–255, no leading zeros)
      def valid(self, s, start, length):
            # Valid if:
            # - length 1 (single digit "0"–"9"), OR
            # - no leading '0' AND
            #   (length < 3 → "10"–"99" is fine OR length == 3 and <= "255")
            return length == 1 or (
                  s[start] != "0"
                  and (length < 3 or s[start : start + length] <= "255")
            )

      # Backtracking helper to build IP addresses by choosing segment lengths
      def helper(self, s, startIndex, dots, ans):
            # remainingLength: characters left to split
            remainingLength = len(s) - startIndex
            # remainingNumberOfIntegers: segments still to form (total 4)
            remainingNumberOfIntegers = 4 - len(dots)

            # Prune: too many or too few characters left to form valid segments
            # - Each segment at most 3 digits → remainingLength <= remainingNumberOfIntegers*3
            # - Each segment at least 1 digit  → remainingLength >= remainingNumberOfIntegers
            if (
                  remainingLength > remainingNumberOfIntegers * 3
                  or remainingLength < remainingNumberOfIntegers
            ):
                  return

            # If we already placed 3 dots, the rest must form the 4th valid segment
            if len(dots) == 3:
                  if self.valid(s, startIndex, remainingLength):
                        # Build the final IP string from chosen segment lengths in 'dots'
                        temp = ""
                        last = 0
                        for dot in dots:
                              # Append segment and a dot
                              temp += s[last : last + dot] + "."
                              last += dot
                        # Append the last segment
                        temp += s[startIndex:]
                        ans.append(temp)
                  return

            # Try placing next segment with length 1 to 3 (but not exceeding remainingLength)
            for curPos in range(1, min(4, remainingLength + 1)):
                  # Choose current segment length
                  dots.append(curPos)
                  # Only continue if this segment is valid
                  if self.valid(s, startIndex, curPos):
                        self.helper(s, startIndex + curPos, dots, ans)
                  # Backtrack: remove the last segment length
                  dots.pop()

      # Main method called by the judge
      def restoreIpAddresses(self, s):
            answer = []
            # Start backtracking from index 0 with no segments chosen yet
            self.helper(s, 0, [], answer)
            return answer
