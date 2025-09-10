#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2327

#? ⌚ Time complexity ➺ O(n) 

#? 🧺 Space complexity ➺ O(n)

from collections import deque

class Solution:
      def peopleAwareOfSecret(self, n: int, delay: int, forget: int) -> int:
            #      Each tuple in 'know' is (day person heard the secret, count of such people)
            know = deque([(1, 1)])              #      On day 1, one person knows the secret
            share = deque([])                   #      People ready to share the secret
            know_cnt = 1                        #      Current number who know the secret but not yet sharing
            share_cnt = 0                       #      Current number sharing the secret

            #      For each day from 2 to n:
            for day in range(2, n + 1):
                  #      Move people from know -> share when delay passes
                  if know and know[0][0] == day - delay:
                        know_cnt -= know[0][1]             #      They're no longer just knowing, now sharing
                        share_cnt += know[0][1]            #      Add them to the share pool
                        share.append(know[0])              #      Track when they started sharing
                        know.popleft()

                  #      Remove sharers who reach forget time
                  if share and share[0][0] == day - forget:
                        share_cnt -= share[0][1]           #      They forget the secret today; remove them
                        share.popleft()

                  #      All current sharers teach new people today
                  if share_cnt:
                        know_cnt += share_cnt              #      New people now know the secret
                        know.append((day, share_cnt))      #      Record who learned it today

            #      Total people who still know the secret (not forgotten)
            MOD = 10**9 + 7
            return (know_cnt + share_cnt) % MOD
