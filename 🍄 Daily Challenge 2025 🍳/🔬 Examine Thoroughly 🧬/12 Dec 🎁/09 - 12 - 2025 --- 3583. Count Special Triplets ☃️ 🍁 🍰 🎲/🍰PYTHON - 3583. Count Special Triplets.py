#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3583

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def specialTriplets(self, nums: List[int]) -> int:
            MOD = 10**9 + 7  # Modulo for large answers

            # Count frequency of each number in nums
            num_cnt = Counter(nums)

            # partials[x] = number of times x has been seen so far during iteration
            partials = defaultdict(int)

            ans = 0

            # For each number n in nums, count triplets (a, n, b) where a*2 = n = b*2
            # i.e., a*2 = b*2 = n (so a = b = n/2)
            for n in nums:
                  target = n * 2  # Looking for numbers x where x*2 = n (so x = n/2)

                  # Left count: how many target values (n/2) we've seen BEFORE current n
                  l_cnt = partials[target]

                  # Update partials count for current n (for future iterations)
                  partials[n] += 1

                  # Right count: how many target values (n/2) remain AFTER current n
                  # Total count minus what we've seen so far
                  r_cnt = num_cnt[target] - partials[target]

                  # Add contribution: l_cnt * r_cnt triplets ending at this n
                  ans = (ans + l_cnt * r_cnt) % MOD

            return ans
