//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 39

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(Candidates)

//? 🧺 Space complexity ➺ O(n * 2 ^ n) 👉🏻 Combinations

function combinationSum(candidates, target) {
      // list to store all the combinations that add up to target
      const combinations = [];

      // call our dfs
      dfs(0, [], 0, candidates, target, combinations);

      return combinations; 
}

/*
* i - index
* cur - current sequence
* total - current sum
*/

function dfs(i, cur, total, candidates, target, combinations) {
      // if our total is equal to target add this to combinations
      if (total === target) {
            combinations.push([...cur]);
            return;
      }

      // if total is > target or index out of bound
      if (total > target || i === candidates.length) {
            // just return from there
            return;
      }

      // recursive call when we add current candidate in cur combination

      // 1. add candidate in cur combination
      cur.push(candidates[i]);
      // 2. call the dfs for this cur and on same candidate
      dfs(i, cur, total + candidates[i], candidates, target, combinations); // cause we can use one elem unlimited times
      // 3. remove from cur combination
      cur.pop();

      // recursive call when we skip current candidate in cur combination

      // 1. call the dfs for next candidate
      dfs(i + 1, cur, total, candidates, target, combinations);
}

