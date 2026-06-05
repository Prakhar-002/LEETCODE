//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3753

//? ⌚ Time complexity ➺ O(D^3 log(num2)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(D^2 log(num2))

var totalWaviness = function(num1, num2) {

      // Function returns total waviness
      // of all numbers from [0, num]
      const solve = (num) => {

            // Less than 3 digits cannot make
            // peak or valley
            if (num < 100) {
                  return 0;
            }


            const s = num.toString();
            const n = s.length;



            // memoCnt[pos][prev][curr]
            // Stores total possible numbers
            // from this state
            const memoCnt = Array(16)
                  .fill()
                  .map(() =>
                        Array(10)
                              .fill()
                              .map(() => Array(10).fill(-1))
                  );


            // memoSum[pos][prev][curr]
            // Stores total waviness contribution
            // from this state
            const memoSum = Array(16)
                  .fill()
                  .map(() =>
                        Array(10)
                              .fill()
                              .map(() => Array(10).fill(-1))
                  );



            const dfs = (
                  pos,
                  prev,
                  curr,
                  isLimit,
                  isLeading
            ) => {


                  // All digits are processed
                  if (pos === n) {

                        // One valid number created
                        return [1, 0];
                  }



                  // Use saved answer only when:
                  // 1. not limited by upper bound
                  // 2. number has already started
                  // 3. previous two digits exist
                  if (
                        !isLimit &&
                        !isLeading &&
                        prev >= 0 &&
                        curr >= 0
                  ) {

                        if (memoCnt[pos][prev][curr] !== -1) {

                              return [
                                    memoCnt[pos][prev][curr],
                                    memoSum[pos][prev][curr]
                              ];
                        }
                  }



                  // cnt = number of generated values
                  // sum = total waviness
                  let cnt = 0;
                  let sum = 0;


                  // Maximum digit allowed here
                  const limit = isLimit
                        ? Number(s[pos])
                        : 9;



                  // Try every possible digit
                  for (let digit = 0; digit <= limit; digit++) {


                        // Still skipping leading zeroes
                        const newLeading =
                              isLeading && digit === 0;


                        // Shift window:
                        // prev curr digit
                        const newPrev = curr;


                        // Current digit after choosing
                        const newCurr = newLeading
                              ? -1
                              : digit;



                        // Solve remaining positions
                        const [subCnt, subSum] = dfs(
                              pos + 1,
                              newPrev,
                              newCurr,
                              isLimit && digit === limit,
                              newLeading
                        );



                        // Need 3 valid digits
                        // to create waviness
                        if (
                              !newLeading &&
                              prev >= 0 &&
                              curr >= 0
                        ) {


                              // Peak:
                              // prev < curr > digit
                              const peak =
                                    prev < curr &&
                                    curr > digit;


                              // Valley:
                              // prev > curr < digit
                              const valley =
                                    prev > curr &&
                                    curr < digit;



                              // Add current wave contribution
                              // for all suffix combinations
                              if (peak || valley) {
                                    sum += subCnt;
                              }
                        }



                        // Add suffix results
                        cnt += subCnt;
                        sum += subSum;
                  }



                  // Store result in DP
                  if (
                        !isLimit &&
                        !isLeading &&
                        prev >= 0 &&
                        curr >= 0
                  ) {

                        memoCnt[pos][prev][curr] = cnt;
                        memoSum[pos][prev][curr] = sum;
                  }


                  return [cnt, sum];
            };



            // index 0 -> count of numbers
            // index 1 -> total waviness
            const [count, totalSum] = dfs(
                  0,
                  -1,
                  -1,
                  true,
                  true
            );


            return totalSum;
      };



      // Prefix sum technique:
      // answer(num1...num2)
      // = solve(num2) - solve(num1 - 1)
      return solve(num2) - solve(num1 - 1);
};