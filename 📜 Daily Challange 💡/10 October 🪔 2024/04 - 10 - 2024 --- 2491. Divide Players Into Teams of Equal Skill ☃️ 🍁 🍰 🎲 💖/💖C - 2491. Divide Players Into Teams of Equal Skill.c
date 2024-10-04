//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2491

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(skill)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
      return (*(int*)a - *(int*)b);
}

long dividePlayers(int* skill, int skillSize) {
      // array is sorted in non-decreasing order
      qsort(skill, skillSize, sizeof(int), compare);

      // to store the sum of the products of paired skills
      long chemistry = 0;

      // pointers initialized to the start and end of the sorted array
      int weak = 0, strong = skillSize - 1;

      // `maxSkill` used to ensure all pairs have the same sum.
      long maxSkill = skill[weak] + skill[strong];

      // loop runs until the `weak` index is less than the `strong` index
      while (weak < strong) {
            // if the sum of the current weakest and strongest skills not equals `maxSkill`
            if (skill[weak] + skill[strong] != maxSkill) {
                  // returns `-1` indicating it's impossible to form such pairs
                  return -1;
            } 

            // Adds the product of `skill[weak]` and `skill[strong]` to `chemistry`
            // Moves the `weak` pointer to higher skill and the `strong` pointer to lower skill
            chemistry += (long)skill[weak++] * skill[strong--];
      }

      // returns the computed `chemistry`
      return chemistry;
}

