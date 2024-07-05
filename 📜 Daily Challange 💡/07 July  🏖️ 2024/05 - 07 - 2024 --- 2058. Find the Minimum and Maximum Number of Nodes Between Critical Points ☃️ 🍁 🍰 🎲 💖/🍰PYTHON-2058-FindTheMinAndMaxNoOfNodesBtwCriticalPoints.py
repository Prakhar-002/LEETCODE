#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2058

#? ⌚ Time complexity -> O(n) 👉 Total nodes 

#? 🧺 Space complexity -> O(1) 

class Solution:
      def isCritical(self, prev, cur, nxt):
            return (
                  prev.val > cur.val < nxt.val 
                              or
                  prev.val < cur.val > nxt.val
            )

      def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
            # we'll use 3 pointer 
            # [1,  2,  3, ...n]
            #  ^   ^   ^
            # prev cur nxt

            prev, cur, nxt = head, head.next, head.next.next

            # min and max 
            minDist , maxDist = float("inf"), -1

            prev_crit_point = 0
            first_crit_point = 0
            cur_crit_index = 1

            while nxt:
                  # if we have a critical pointer
                  if self.isCritical(prev, cur, nxt):
                        # checking if we had a critical before
                        if first_crit_point:
                              # max dist will be current critical - first critical
                              maxDist = cur_crit_index - first_crit_point
                              # minDist will be min of itself or current critical - previous critical
                              minDist = min(
                                    minDist,
                                    cur_crit_index - prev_crit_point
                              )
                        # if It is first occurring update it
                        else:
                              first_crit_point  = cur_crit_index

                        # every time we found one critical our previous critical will update
                        prev_crit_point = cur_crit_index

                  # update all pointers
                  prev, cur, nxt = cur, nxt, nxt.next
                  cur_crit_index += 1

            # if min dist is not chanced yet assign it with -1
            if minDist == float("inf"):
                  minDist = -1

            return [minDist, maxDist]