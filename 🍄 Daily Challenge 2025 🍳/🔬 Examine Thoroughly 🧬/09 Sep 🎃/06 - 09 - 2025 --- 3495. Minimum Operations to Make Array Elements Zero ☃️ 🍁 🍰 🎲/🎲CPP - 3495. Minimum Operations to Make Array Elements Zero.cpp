//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3495

//? ⌚ Time complexity ➺ O(n log R)  👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      using ll = long long;   //   Define 'll' as shorthand for long long (64-bit integer)
public:
      ll get(int num) {
            int i = 1;       //   Keeps track of current level/depth (like position in binary levels)
            int base = 1;    //   Starting base = 1, doubles each time (1, 2, 4, 8, …)
            ll cnt = 0;      //   Accumulated count result

            //   Loop until base exceeds the input number
            while (base <= num) {
                  //   Increment count with a weighted contribution based on current level 'i'
                  //   (i+1)/2 ensures alternating pattern of weights as i increases
                  cnt += 1ll * (i + 1) / 2 * (min(base * 2 - 1, num) - base + 1);

                  i++;        //   Move to next level
                  base *= 2;  //   Double the base (next binary interval)
            }
            return cnt;       //   Return accumulated count for given number
      }

      long long minOperations(vector<vector<int>>& queries) {
            ll res = 0;      //   Initialize result accumulator

            //   For each query with range [q[0], q[1]]:
            for (auto& q : queries) {
                  //   Compute contributions within range using 'get'
                  //   Subtract prefix sum before q[0], use q[1] as upper bound
                  //   Add 1 before division by 2 to handle integer rounding
                  res += (get(q[1]) - get(q[0] - 1) + 1) / 2;
            }

            return res;      //   Return total minimum operations for all queries
      }
};
