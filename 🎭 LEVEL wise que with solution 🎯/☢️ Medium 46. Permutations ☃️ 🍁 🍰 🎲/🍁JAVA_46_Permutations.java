//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 46

//? ⌚ Time complexity -> O(n! * n^2) 👉 length of nums array

//? 🧺 Space complexity -> O(n! * n) 👉 length of nums array

import java.util.*;

class Solution {
      public List<List<Integer>> permute(int[] nums) {
            if(nums.length == 0){
                  List<List<Integer>> empty = new ArrayList<>();
                  empty.add(new ArrayList<>());
                  return empty;
            }

            // for every sequence we get
            // call for n - 1 elem except 0th elem
            int[] subArray = new int[nums.length - 1];
            System.arraycopy(nums, 1, subArray, 0, nums.length - 1);

            List<List<Integer>> perms = permute(subArray);
            List<List<Integer>> res = new ArrayList<>();

            for (List<Integer> perm : perms) {
                  // go to every position of sequence and insert nums[0]
                  for (int i = 0; i <= perm.size(); i++) {
                        // make a copy of our perms cause we will not use our original perm
                        List<Integer> permCopy = new ArrayList<>(perm);
                        // insert at every position our nums[0]
                        permCopy.add(i, nums[0]);
                        // append in our res
                        res.add(permCopy);
                  }
            }

            return res;
      }
}