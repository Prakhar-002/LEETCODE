//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1894

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(chalk)

//? 🧺 Space complexity ➺ O(1)

// `k : initialChalkPieces`: An integer that represents an initial amount of chalk
var chalkReplacer = function (chalk, k) {
      // calculating the total amount of chalk needed 
      // for one complete round through all students
      const totalChalkNeeded = chalk.reduce((sum, current) => sum + current, 0);

      // calculates the remaining chalk after completing as many full rounds as possible
      let remainingChalk = k % totalChalkNeeded;

      // iterates over each student 
      for (let studentIndex = 0; studentIndex < chalk.length; studentIndex++) {
            const studentChalkUse = chalk[studentIndex];

            // this means the current student is the one 
            // who cannot complete their problem due to insufficient chalk
            if (remainingChalk < studentChalkUse) {
                  // the loop ends by returning the student's index
                  return studentIndex;
            }

            // student has enough chalk to finish their problem
            remainingChalk -= studentChalkUse; // subtracts the student's chalk usage
      }
};

