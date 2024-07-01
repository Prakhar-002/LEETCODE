//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1550

//? ⌚ Time complexity -> O(n) 👉 length of array

//? 🧺 Space complexity -> O(1) 

bool threeConsecutiveOdds(int* arr, int arrSize) {
      if (arrSize < 3) {
            return 0;
      }

      int odds = 0;

      for (int i = 0; i < arrSize; i++) {
            // if we get odd inc our odd count
            if (arr[i] % 2 != 0) {
                  odds++;
                  // if odd is 3 return tree
                  if (odds >= 3) {
                        return 1;
                  }
            } 
            // if we hit one even odd count will 0
            else {
                  odds = 0;
            }
      }

      return odds >= 3;
}