#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1653

#? ⌚ Time complexity ➺ O(n) 👉🏻 n = Length of s

#? 🧺 Space complexity ➺ O(1)

class Solution:

      # Intuition is check for every character 
      # can it be our point so that every value to left side is 'a'
      # and every value to right of it is 'b'

      # so we need number of 'b' to our left side of current char
      # and we need number of 'a' that are right side of our current char

      # so add them 'b' to the left and 'a' to the right 
      # minimize this result for every character 

      def minimumDeletions(self, s: str) -> int:
            # we can predict the 'a' to the right side in O(n)
            # so we will count total 'a' in str and go linear wise
            # when we got 'a' we delete it from total 
            # so that number of 'a' will be right side of that character

            a_right_count = 0

            for ch in s:
                  # count total 'a' in string
                  a_right_count += 1 if ch == 'a' else 0

            # count of 'b' will inc if we got 'b' in our way
            b_left_count = 0
            # assign it with max possible deletion
            deletions = len(s)

            for i, ch in enumerate(s):
                  # our 'a' count will dec by 1 if we got 'a'
                  a_right_count -= 1 if ch == 'a' else 0

                  # deletion will be No. of 'b' remain in left + No. of 'a' remain in right
                  # take the minimum of this deletion with our res
                  # thisDeletion = a_right_count + b_left_count
                  deletions = min(deletions, a_right_count + b_left_count)

                  # our 'b' count will inc by 1 if we got 'b'
                  b_left_count += 1 if ch == 'b' else 0

            return deletions