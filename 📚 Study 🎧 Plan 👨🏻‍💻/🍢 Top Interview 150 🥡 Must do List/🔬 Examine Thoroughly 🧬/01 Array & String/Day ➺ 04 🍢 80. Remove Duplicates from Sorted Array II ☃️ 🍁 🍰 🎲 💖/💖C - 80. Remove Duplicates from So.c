//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 80

//? ⌚ Time complexity -> O(n) 👉 given arr length

//? 🧺 Space complexity -> O(1)

int removeDuplicates(int* nums, int numsSize) {
      int left = 0;
      // let nums[right] = nums[0];
      for (int right = 0; right < numsSize; right++){
            // left == 0 first elem is always in our arr
            // left == 1 sec also be part of our array
            // nums[left - 2] != nums[right] checking current elem is not equal 
            //  from previous two elem of current position of our left pointer 
            if (left == 0 || left == 1 || nums[left - 2] != nums[right]){
                  // assign right value to our left pointer
                  nums[left++] = nums[right];
            }
      }
      return left;
}