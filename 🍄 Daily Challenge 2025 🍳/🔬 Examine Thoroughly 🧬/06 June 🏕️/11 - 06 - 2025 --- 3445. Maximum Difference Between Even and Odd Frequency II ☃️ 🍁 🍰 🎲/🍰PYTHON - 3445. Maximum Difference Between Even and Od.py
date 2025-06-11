#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3445

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxDifference(self, s: str, k: int) -> int:
            # Helper function to encode parity status of counts of a and b
            def getStatus(cnt_a: int, cnt_b: int) -> int:
                  # Returns 2-bit status:
                  # bit 1 = parity of cnt_a (0 if even, 1 if odd)
                  # bit 0 = parity of cnt_b (0 if even, 1 if odd)
                  return ((cnt_a & 1) << 1) | (cnt_b & 1)

            n = len(s)
            ans = float("-inf")  # Initialize the max difference

            # Try all combinations of characters a and b from '0' to '4'
            for a in ["0", "1", "2", "3", "4"]:
                  for b in ["0", "1", "2", "3", "4"]:
                        if a == b:
                              continue  # Skip same characters

                        best = [float("inf")] * 4  # Best values for each parity state
                        cnt_a = cnt_b = 0          # Running count of a and b
                        prev_a = prev_b = 0        # Counts for the left pointer
                        left = -1                  # Start of the sliding window

                        # Slide the right pointer through the string
                        for right in range(n):
                              cnt_a += s[right] == a  # Count 'a'
                              cnt_b += s[right] == b  # Count 'b'

                              # Maintain window of size >= k and at least 2 b's in left half
                              while right - left >= k and cnt_b - prev_b >= 2:
                                    left_status = getStatus(prev_a, prev_b)  # Get parity state
                                    # Store the minimal (prev_a - prev_b) for this parity
                                    best[left_status] = min(
                                          best[left_status], prev_a - prev_b
                                    )
                                    left += 1
                                    prev_a += s[left] == a
                                    prev_b += s[left] == b

                              # Current status for right side
                              right_status = getStatus(cnt_a, cnt_b)

                              # Check for valid opposite parity in left side
                              # Flip the 2nd bit (cnt_a parity) to match opposite
                              if best[right_status ^ 0b10] != float("inf"):
                                    ans = max(
                                          ans, cnt_a - cnt_b - best[right_status ^ 0b10]
                                    )

            return int(ans)
