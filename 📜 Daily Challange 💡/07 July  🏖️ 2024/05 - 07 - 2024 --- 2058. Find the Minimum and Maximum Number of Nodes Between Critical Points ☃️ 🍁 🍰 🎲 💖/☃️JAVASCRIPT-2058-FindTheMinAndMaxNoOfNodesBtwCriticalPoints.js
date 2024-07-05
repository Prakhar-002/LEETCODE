//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2058

//? ⌚ Time complexity -> O(n) 👉 Total nodes 

//? 🧺 Space complexity -> O(1) 

var isCritical = function (prev, cur, nxt) {
      return (
            (prev.val > cur.val && cur.val < nxt.val)
            ||
            (prev.val < cur.val && cur.val > nxt.val)
      );
}

var nodesBetweenCriticalPoints = function (head) {
      // We'll use 3 pointers
      // [1,  2,  3, ...n]
      //  ^   ^   ^
      // prev cur nxt
      let prev = head;
      let cur = head.next;
      let nxt = cur.next;

      // Initialize min and max distances
      let minDist = Infinity;
      let maxDist = -1;

      let prevCritPoint = 0;
      let firstCritPoint = 0;
      let curCritIndex = 1;

      while (nxt !== null) {
            // If we have a critical point
            if (isCritical(prev, cur, nxt)) {
                  // Checking if we had a critical point before
                  if (firstCritPoint !== 0) {
                        // Max dist will be current critical - first critical
                        maxDist = curCritIndex - firstCritPoint;
                        // MinDist will be min of itself or current critical - previous critical
                        minDist = Math.min(minDist, curCritIndex - prevCritPoint);
                  }
                  else {
                        // If it's the first occurring critical point, update it
                        firstCritPoint = curCritIndex;
                  }

                  // Every time we found one critical point, our previous critical will update
                  prevCritPoint = curCritIndex;
            }

            // Update all pointers
            prev = cur;
            cur = nxt;
            nxt = nxt.next;
            curCritIndex++;
      }

      // If minDist is not changed yet, assign it with -1
      if (minDist === Infinity) {
            minDist = -1;
      }

      return [minDist, maxDist];
}