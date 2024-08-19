//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 650

//? ⌚ Time complexity ➺ O(n ^ 2) 

//? 🧺 Space complexity ➺ O(n)

var minSteps = function (n) {
      // initialized with a length of `n + 1`
      const keyBoard = new Array(n + 1);
      // and every element is set to max possible
      keyBoard.fill(1000);

      // 'A' on the screen, you're already there and no steps are needed
      keyBoard[1] = 0;

      // loop iterates from 2 up to `n`
      // objective is to compute the minimum steps to get `num` 'A's on the screen
      for (let num = 2; num <= n; num++) {
            // this loop iterates over its factors up to `num // 2`
            // to check which factor when used as a 'base'
            // (when copied and pasted) minimizes the steps needed to reach `num`
            for (let factor = 1; factor <= Math.floor(num / 2); factor++) {
                  // meaning `factor` is a factor of `num`
                  if (num % factor === 0) {
                        // algorithm calculates the possible minimum steps as `keyBoard[factor] + num /
                        // `factor`
                        // updates the `keyBoard[num]` with the lesser value between the current
                        keyBoard[num] = Math.min(
                              // `keyBoard[num]` and newly calculated steps
                              keyBoard[num],
                              // `keyBoard[factor]` gives the steps needed to first get `factor` 'A's
                              // we add `num / factor`, which is the number of times we need to paste
                              // `factor` 'A's to get `num` 'A's
                              keyBoard[factor] + num / factor
                        );
                  }
            }
      }

      // minimum number of steps required to get `n` 'A's on the screen
      return keyBoard[n];
};

//*---------------------------------------------------------------

//? ⌚ Time complexity ➺ O(sqrt(n)) 

//? 🧺 Space complexity ➺ O(1)

var minSteps = function (n) {
      let operations = 0;
      for (let i = 2; i * i <= n;) {
            // checks whether `n` is divisible by `i` 
            if (n % i === 0) { // two operations are performed
                  // adds `i` to `operations`, signifying that one "step" involves using a factor of `n`
                  operations += i;
                  //  updates `n` by dividing it by its factor `i`, effectively reducing `n`
                  n = Math.floor(n / i);
            } else { // `n` is not divisible by `i`
                  // `i` is incremented by `1`
                  i++;
            }
      }

      // if `n` is not equal to 1
      //  `n` itself is a prime number bigger than any of its prior factors tested in the loop
      if (n !== 1) {
            // `n` is added to `operations`
            // This is because the loop effectively finds prime factors 
            // (and possibly their powers), and once no more factors are found 
            // (meaning `i*i > n`), if the remaining `n` is greater than 1, 
            // it's a prime factor that couldn't be further reduced within the loop
            operations = operations + n;
      }

      return operations;
};