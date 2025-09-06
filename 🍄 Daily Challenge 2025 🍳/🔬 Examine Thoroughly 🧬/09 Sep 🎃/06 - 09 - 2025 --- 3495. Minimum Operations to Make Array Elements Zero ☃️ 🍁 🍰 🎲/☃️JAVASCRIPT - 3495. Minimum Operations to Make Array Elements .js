//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3495

//? ⌚ Time complexity ➺ O(n log R)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minOperations = function (queries) {
      let res = 0n;  //   Initialize result accumulator as BigInt

      //   Loop over each query [start, end]
      for (const q of queries) {
            const count1 = get(q[1]);       //   Get cumulative count up to upper bound q[1]
            const count2 = get(q[0] - 1);   //   Get cumulative count just before lower bound q[0]

            //   Add difference divided by 2, adjusting with +1n for rounding
            res += (count1 - count2 + 1n) / 2n;
      }

      return Number(res);  //   Convert BigInt result back to Number and return
};

const get = (num) => {
      let cnt = 0n;    //   Initialize count accumulator as BigInt
      let i = 1;       //   Level/depth counter, affects weighting
      let base = 1;    //   Starting base interval value

      //   Loop until base exceeds num
      while (base <= num) {
            //   Define end of current range interval, capped by num
            const end = Math.min(base * 2 - 1, num);

            //   Add weighted count for this interval segment
            //   Math.floor((i + 1) / 2) gives alternating weight pattern
            cnt += BigInt(Math.floor((i + 1) / 2)) * BigInt(end - base + 1);

            i++;          //   Increment level for next iteration
            base *= 2;    //   Double base for the next range interval
      }

      return cnt;       //   Return the cumulative count for given num
};
