//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2491

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(skill)

//? 🧺 Space complexity ➺ O(1)

var dividePlayers = function (skill) {
      // array is sorted in non-decreasing order
      skill.sort((a, b) => a - b);

      // to store the sum of the products of paired skills
      let chemistry = 0n;

      // pointers initialized to the start and end of the sorted array
      let weak = 0, strong = skill.length - 1;

      // `maxSkill` used to ensure all pairs have the same sum.
      const maxSkill = BigInt(skill[weak] + skill[strong]);

      // loop runs until the `weak` index is less than the `strong` index
      while (weak < strong) {
            // if the sum of the current weakest and strongest skills not equals `maxSkill`
            if (BigInt(skill[weak] + skill[strong]) !== maxSkill) {
                  // returns `-1` indicating it's impossible to form such pairs
                  return -1;
            }

            // Adds the product of `skill[weak]` and `skill[strong]` to `chemistry`
            // Moves the `weak` pointer to higher skill and the `strong` pointer to lower skill
            chemistry += BigInt(skill[weak++]) * BigInt(skill[strong--]);
      }

      // returns the computed `chemistry`
      return Number(chemistry);
}

//!------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(skill)

//? 🧺 Space complexity ➺ O(n)

var dividePlayers = function (skill) {
      // Calculate the sum of all skill levels
      const total = skill.reduce((a, b) => a + b, 0);

      // If the total skill points can not be evenly divided into pairs
      if ((2 * total) % skill.length) return -1;

      // Create a Map that maps each distinct skill level to the number of times it appears
      const count = new Map();
      for (let s of skill) {
            count.set(s, (count.get(s) || 0) + 1);
      }

      // Calculate the target sum for each pair of players' skills
      const target = (2 * total) / skill.length;
      // Used to keep track of the sum of products of skill levels
      let chemistry = 0;

      // Iterate through each skill level 's' in the array 'skill'
      for (let s of skill) {
            // If the current skill 's' has already been completely paired off
            if (!count.get(s)) continue;

            // Calculate required skill level of player to pair with the current player
            const diff = target - s;

            // If there is no player with the required complementary skill level 'diff'
            if (!count.get(diff)) return -1;

            // Their chemistry is added to the total 'chemistry'
            chemistry += s * diff;
            // Decrease the count of the current skill
            count.set(s, count.get(s) - 1);
            // Decrease the count of the complementary skill
            count.set(diff, count.get(diff) - 1);
      }

      return chemistry;
}
