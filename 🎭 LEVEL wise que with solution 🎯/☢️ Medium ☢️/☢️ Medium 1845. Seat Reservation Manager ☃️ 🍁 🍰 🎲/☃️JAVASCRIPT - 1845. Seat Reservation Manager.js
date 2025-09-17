//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1845

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)


var SeatManager = function (n) {
      this.next = 1;
      this.heap = [];
};

SeatManager.prototype._heapPush = function (x) {
      const a = this.heap;
      a.push(x);
      let i = a.length - 1;
      while (i > 0) {
            let p = (i - 1) >> 1;
            if (a[p] <= a[i]) break;
            [a[p], a[i]] = [a[i], a[p]];
            i = p;
      }
};

SeatManager.prototype._heapPop = function () {
      const a = this.heap;
      const res = a[0];
      const x = a.pop();
      if (a.length) {
            a[0] = x;
            let i = 0;
            while (true) {
                  let l = i * 2 + 1, r = l + 1, m = i;
                  if (l < a.length && a[l] < a[m]) m = l;
                  if (r < a.length && a[r] < a[m]) m = r;
                  if (m === i) break;
                  [a[i], a[m]] = [a[m], a[i]];
                  i = m;
            }
      }
      return res;
};

SeatManager.prototype.reserve = function () {
      if (this.heap.length) return this._heapPop();
      return this.next++;
};


SeatManager.prototype.unreserve = function (seatNumber) {
      this._heapPush(seatNumber);
};
