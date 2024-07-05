//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2058

//? ⌚ Time complexity -> O(n) 👉 Total nodes 

//? 🧺 Space complexity -> O(1) 

class Solution {

      private boolean isCritical(ListNode prev, ListNode cur, ListNode nxt){
            return (
                  (prev.val > cur.val && cur.val < nxt.val) 
                              ||
                  (prev.val < cur.val && cur.val > nxt.val)
            );
      }

      public int[] nodesBetweenCriticalPoints(ListNode head) {
            // we'll use 3 pointer
            // [1,  2,  3, ...n]
            //  ^   ^   ^
            // prev cur nxt

            ListNode prev = head;
            ListNode cur = head.next;
            ListNode nxt = cur.next;

            // min and max
            int minDist = Integer.MAX_VALUE;
            int maxDist = -1;

            int prevCritPoint = 0;
            int firstCritPoint = 0;
            int curCritIndex = 1;

            while (nxt != null) {
                  // if we have a critical pointer
                  if (isCritical(prev, cur, nxt)) {
                        // checking if we had a critical before
                        if (firstCritPoint != 0){
                              // max dist will be current critical - first critical
                              maxDist = curCritIndex - firstCritPoint;
                              // minDist will be min of itself or current critical - previous critical
                              minDist = Math.min(minDist, curCritIndex - prevCritPoint);
                        } 
                        // if It is first occurring update it
                        else {
                              firstCritPoint = curCritIndex;
                        }

                        // every time we found one critical our previous critical will update
                        prevCritPoint = curCritIndex;
                  }

                  // update all pointers
                  prev = cur;
                  cur = nxt;
                  nxt = nxt.next;
                  curCritIndex++;
            }

            //if min dist is not chanced yet assign it with -1
            if (minDist == Integer.MAX_VALUE) {
                  minDist = -1;
            }

            return new int[] {minDist, maxDist};
      }
}