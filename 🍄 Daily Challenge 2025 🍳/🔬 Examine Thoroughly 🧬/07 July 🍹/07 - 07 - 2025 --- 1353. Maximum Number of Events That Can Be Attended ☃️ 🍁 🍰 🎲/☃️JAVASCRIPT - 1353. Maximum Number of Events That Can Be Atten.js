//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1353

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(events)

//? 🧺 Space complexity ➺ O(n)

var maxEvents = function (events) {
      const n = events.length;
      let maxDay = 0;
      for (const e of events) {
            maxDay = Math.max(maxDay, e[1]);
      }

      events.sort((a, b) => a[0] - b[0]);

      const pq = new MinPriorityQueue();
      let ans = 0;

      for (let i = 1, j = 0; i <= maxDay; i++) {
            while (j < n && events[j][0] <= i) {
                  pq.enqueue(events[j][1]);
                  j++;
            }

            while (!pq.isEmpty() && pq.front() < i) {
                  pq.dequeue();
            }

            if (!pq.isEmpty()) {
                  pq.dequeue();
                  ans++;
            }
      }
      return ans;
};
