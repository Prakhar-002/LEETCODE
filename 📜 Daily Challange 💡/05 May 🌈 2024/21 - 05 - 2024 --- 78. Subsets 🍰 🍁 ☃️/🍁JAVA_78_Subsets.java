//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 78 

import java.util.*;

class Solution {

      public void solver(int arr[], int idx, List<Integer> temp, List<List<Integer>> result) {
            if (idx == arr.length) {
                  result.add(new ArrayList<>(temp));
                  return;
            }

            temp.add(arr[idx]);
            solver(arr, idx + 1, temp, result);
            temp.remove(temp.size() - 1);
            solver(arr, idx + 1, temp, result);
      }

      public List<List<Integer>> subsets(int[] nums) {
            List<List<Integer>> result = new ArrayList<>();
            List<Integer> temp = new ArrayList<>();
            solver(nums, 0, temp, result);

            return result;
      }
}