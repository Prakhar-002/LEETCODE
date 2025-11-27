//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(sandwiches)

//? 🧺 Space complexity ➺ O(1)

var countStudents = function (students, sandwiches) {
      // Count students preferring each sandwich type
      const count = [0, 0];
      for (const student of students) {
            count[student]++;
      }

      // Go through sandwiches in order
      for (const sandwich of sandwiches) {
            // If no student wants this type, return remaining students
            if (count[sandwich] === 0) {
                  return count[1 - sandwich];
            }
            // Decrease count of students who can take this sandwich
            count[sandwich]--;
      }

      // All sandwiches matched, return 0
      return 0;
};
