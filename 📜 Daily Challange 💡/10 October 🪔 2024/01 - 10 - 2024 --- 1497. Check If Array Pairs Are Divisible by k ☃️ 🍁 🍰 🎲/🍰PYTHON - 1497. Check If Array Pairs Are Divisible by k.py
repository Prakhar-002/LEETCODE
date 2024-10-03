#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1467

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

#? 🧺 Space complexity ➺ O(k)

class Solution:  
      def canArrange(self, arr: List[int], k: int) -> bool:
            # `freq` is declared to store frequencies of remainders 
            # when elements of `arr` are divided by `k`
            freq = [0] * k

            # for each number in `arr` 
            for num in arr:
                  # calculate its `remainder` when divided by `k`
                  rem = num % k

                  # If the remainder is negative
                  if rem < 0:
                        # adds `k` to make the remainder non-negative
                        rem += k

                  # inc the freq of rem
                  freq[rem] += 1

            # if the frequency of numbers whose remainder is zero 
            # when divided by `k` is odd and it's impossible to pair them all up
            if freq[0] % 2 != 0:
                  # so we return false
                  return False

            # Next, for each `i` from 1 to `k/2`
            for i in range(1, k // 2 + 1):
                  # if the frequency of the `i-th` remainder (`freq[i]`) 
                  # doesn't match the frequency of the `k-i` remainder (`freq[k - i]`)
                  if freq[i] != freq[k - i]:
                        # returns `false`
                        return False

            # If all checks pass return `true`
            return True


