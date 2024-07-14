//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 726

//? ⌚ Time complexity -> O(n) 👉 No. of Char in String (Formula) 

//? 🧺 Space complexity -> O(n) 👉 USing A Stack of HashMap

var countOfAtoms = function (formula) {
      // Making a stack of Map
      const stack = [new Map()];
      // iterator
      let i = 0;

      while (i < formula.length) {
            // There are three cases possible
            // 1st case: open parenthesis
            if (formula[i] === '(') {
                  // if we get an open parenthesis we add a new Map
                  // cause we store Map according to parenthesis
                  stack.push(new Map());
            }

            // 2nd case: close parenthesis
            else if (formula[i] === ')') {
                  // if we get a close parenthesis we end up with the last Map
                  // so we will merge last Map with 2nd last Map
                  const curMap = stack.pop();

                  // Count for that number occurrence after the parenthesis ()'2'
                  let count = 0;

                  // Now extract the number
                  while (i + 1 < formula.length && /\d/.test(formula[i + 1])) {
                        count = count * 10 + parseInt(formula[i + 1]);
                        i++;
                  }

                  count = count === 0 ? 1 : count;

                  // get the 2nd last Map and merge the Last (current) Map with 2nd last
                  const previousMap = stack[stack.length - 1];
                  for (const [elem, freq] of curMap) {
                        // we multiply with number occur after parenthesis
                        previousMap.set(elem, (previousMap.get(elem) || 0) + freq * count);
                  }
            }

            // 3rd case: elem and its count
            else {
                  // Extract the elem cause It can be one digit
                  let element = formula[i];
                  // Count for that number occurrence
                  let count = 0;

                  // for elem if It is 2 digit then
                  if (i + 1 < formula.length && /[a-z]/.test(formula[i + 1])) {
                        element += formula[i + 1];
                        i++;
                  }

                  // Now extract the number
                  while (i + 1 < formula.length && /\d/.test(formula[i + 1])) {
                        count = count * 10 + parseInt(formula[i + 1]);
                        i++;
                  }

                  // count will be 1 if no number present after elem => ON
                  count = count === 0 ? 1 : count;
                  // get the last Map
                  const curMap = stack[stack.length - 1];
                  // add the elem along with Its count
                  curMap.set(element, (curMap.get(element) || 0) + count);
            }

            // inc the count
            i++;
      }

      // after all parenthesis and going through whole formula
      // there'll only one Map left
      const cntMap = stack[0];
      let countAtom = '';

      const sortedKeys = Array.from(cntMap.keys()).sort();

      for (const elem of sortedKeys) {
            countAtom += elem;
            if (cntMap.get(elem) > 1) {
                  countAtom += cntMap.get(elem).toString();
            }
      }

      return countAtom;
};